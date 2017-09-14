#!/usr/bin/env python3

import os
import pycurl
from io import BytesIO
import re
import textwrap


def download(url, local_filename):
    ''' Downloads url to local_filename; caller must try-catch. '''
    print("Downloading [{0}] to [{1}].".format(url, local_filename))
    buff = BytesIO()
    curl = pycurl.Curl()
    curl.setopt(curl.URL, url)
    curl.setopt(curl.WRITEDATA, buff)
    curl.perform()
    curl.close()

    with open(local_filename, "wb") as f:
        f.write(buff.getvalue())

    buff.close()


# entypo's website claims 411, but both the CSS and test html page have 284
# this is used in `compare.py` as well
EXPECTED_NUM_ICONS = 284


if __name__ == "__main__":
    # Make sure we're in the same directory to avoid overwriting things
    # in parent directory (specifically entypo.ttf)
    file_loc = os.path.dirname(os.path.abspath(__file__))
    curr_dir = os.path.abspath(os.getcwd())

    if file_loc != curr_dir:
        raise RuntimeError(
            "Please execute this script in directory [{0}]".format(file_loc)
        )

    # Download the files
    raw_baseurl = "https://raw.githubusercontent.com/danielbruce/entypo/master/font"
    entypo_ttf  = "{0}/enytpo.ttf".format(raw_baseurl)
    entypo_css  = "{0}/entypo.css".format(raw_baseurl)
    entypo_eot  = "{0}/entypo.eot".format(raw_baseurl)
    entypo_svg  = "{0}/entypo.svg".format(raw_baseurl)
    entypo_woff = "{0}/entypo.woff".format(raw_baseurl)
    try:
        download(entypo_ttf,  "entypo.ttf")
        download(entypo_css,  "entypo.css")
        download(entypo_eot,  "entypo.eot")
        download(entypo_svg,  "entypo.svg")
        download(entypo_woff, "entypo.woff")
    except Exception as e:
        raise RuntimeError("Unable to download necessary files:\n{0}".format(e))

    # Generate entypo.h
    cdefs = []
    num_matches = 0
    longest = 0
    # .icon-location:before { content: "\e724"; } /* '\e724' */
    # we have to avoid the one inside   ^^^^^^ and use ****
    # because the content for some is a raw unicode character
    icon_re = re.compile(r'.icon-(.+):before { content: ".+"; } /\* \'\\(.+)\' \*/')
    with open("entypo.css", "r") as css:
        for line in css:
            match = icon_re.match(line)
            if match:
                num_matches += 1
                icon_name, icon_code = match.groups()
                icon_def = "#define ENTYPO_ICON_{0}".format(
                    icon_name.replace("-", "_").upper()
                )
                icon_code = "0x{0}".format(icon_code.upper())
                cdefs.append((icon_name, icon_def, icon_code))
                longest = max(longest, len(icon_def))


    if num_matches == EXPECTED_NUM_ICONS:
        print("Found exactly [{0}] icons, as expected.".format(num_matches))
    else:
        raise RuntimeError(
            "Found [{0}] icons, expected [{1}]".format(num_matches,
                                                       EXPECTED_NUM_ICONS)
        )

    # Write out the cdef file and associated testing index.html and python bindings
    index = open("index.html", "w")
    index.write(textwrap.dedent('''
        <!DOCTYPE html>
        <html lang="en">
          <head>
            <title>EntypoTest</title>
            <meta charset="utf-8"/>
            <link rel="stylesheet" type="text/css" href="entypo.css"/>
          </head>
          <body>
    '''))

    entypo_h = open("entypo.h", "w")
    entypo_h.write(textwrap.dedent(r'''
        /**
         * \file
         *
         * \brief This is a list of icon codes for the ``entypo.ttf`` font by Daniel Bruce.
         *
         * \rst
         *
         * This file defines the full listing of `Entypo <http://www.entypo.com/>`_
         * icons available in NanoGUI.  Please note that if viewing the documentation
         * on the web, your browser may display the icons differentaly than what they
         * look like in NanoGUI.
         *
         * The following icons are available:
         *
         * .. raw:: html
         *
         *    <div class="wy-table-responsive">
         *      <table class="docutils" border=1>
         *        <colgroup>
         *          <col width="40%" />
         *          <col width="40%" />
         *          <col width="20%" />
         *        </colgroup>
         *        <thead valign="bottom">
         *          <tr class="row-odd">
         *            <th class="head">NanoGUI Def</th>
         *            <th class="head">Entypo Description</th>
         *            <th class="head">Icon</th>
         *          </tr>
         *        </thead>
         *        <tbody valign="top">
    '''.replace("\n", "", 1)))  # remove empty line at top

    constants_entypo = open("constants_entypo.cpp", "w")
    constants_entypo.write(textwrap.dedent('''
        #ifdef NANOGUI_PYTHON

        #include "python.h"

        void register_constants_entypo(py::module &m) {
            /* Entypo constants */
            {
                #define C(name) g.attr("ICON_" #name) = py::int_(ENTYPO_ICON_##name);
                py::module g = m.def_submodule("entypo");
    '''))

    # First write the docstring for entypo_h so the API isn't littered with `define ENTYPO_ICON X`
    # all over the place, which significantly increases build time (file generated for every def).
    flip = True  # thead was odd, start on even
    for icon_name, icon_def, icon_code in cdefs:
        doc = 'the "{name}" icon: <span class="icon-{name}"></span>'.format(name=icon_name)
        index.write("    <p>{doc}</p>\n".format(doc=doc))

        if flip:
            row_kind = "row-even"
        else:
            row_kind = "row-odd"
        flip = not flip

        # icon_def is `#define ENTYPO_ICON_X`
        code_def = icon_def.split(" ")[1]
        pybind = "C({0});".format(code_def.split("ENTYPO_ICON_")[1])

        entypo_h.write(textwrap.dedent('''
            *          <tr class="{row_kind}">
            *            <td><code>{code_def}</code></td>
            *            <td>The "{name}" Icon.</td>
            *            <td><span class="icon-{name}"></span></td>
            *          </tr>
        '''.format(
            row_kind=row_kind,
            code_def=code_def,
            name=icon_name
        )).replace("\n*", "\n *").replace("\n", "", 1).rstrip())
        entypo_h.write("\n")  # rstrip removed two, we need 1

        constants_entypo.write("        {pybind}\n".format(pybind=pybind))

    # Now close the docstring and actually write the definitions
    entypo_h.write(textwrap.dedent(r'''
         *        </tbody>
         *      </table>
         *    </div><!-- wy-table-responsive -->
         *
         * \endrst
         */

        #pragma once

        // prevent individal pages from being generated for all of these
        #if !defined(DOXYGEN_SHOULD_SKIP_THIS)

    '''.replace("\n", "", 1)))  # replace leading \n (NECESSARY!)

    # close the pybind
    constants_entypo.write(textwrap.dedent('''
                #undef C
            }
        }

        #endif
    '''))

    for icon_name, icon_def, icon_code in cdefs:
        entypo_h.write("{definition:<{longest}} {code}\n".format(
            definition=icon_def,
            longest=longest,
            code=icon_code
        ))

    entypo_h.write("\n#endif // DOXYGEN_SHOULD_SKIP_THIS\n")

    index.write(textwrap.dedent('''
          </body>
        </html>
    '''))

    index.close()
    entypo_h.close()
    constants_entypo.close()


