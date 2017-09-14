#!/usr/bin/env python3

import os
import pycurl
import codecs
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
    # follow redirects, important for github raw and binary files it appears
    curl.setopt(curl.FOLLOWLOCATION, True)
    curl.perform()

    status = curl.getinfo(curl.RESPONSE_CODE)
    curl.close()

    if status != 200:
        raise RuntimeError(
            "Non-200 response of [{0}] downloading [{1}]".format(status, url)
        )

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
    entypo_css  = "https://raw.githubusercontent.com/danielbruce/entypo/f94e077449daa87321aa0df5643889460ba8291b/font/entypo.css"
    # Using old NanoGUI ttf file, seems to have all the icons we want, but the new one
    # seems to be a larger font or something...
    entypo_ttf  = "https://github.com/danielbruce/entypo/raw/f94e077449daa87321aa0df5643889460ba8291b/font/entypo.ttf"
    # entypo_ttf  = "https://github.com/wjakob/nanogui/raw/0ebdddf4e42d47099868cd44ead99c305b06e606/resources/entypo.ttf"
    entypo_eot  = "https://github.com/danielbruce/entypo/raw/f94e077449daa87321aa0df5643889460ba8291b/font/entypo.eot"
    entypo_svg  = "https://github.com/danielbruce/entypo/raw/f94e077449daa87321aa0df5643889460ba8291b/font/entypo.svg"
    entypo_woff = "https://github.com/danielbruce/entypo/raw/f94e077449daa87321aa0df5643889460ba8291b/font/entypo.woff"
    try:
        download(entypo_ttf,  "entypo.ttf")
        download(entypo_css,  "entypo.css")
        download(entypo_eot,  "entypo.eot")
        download(entypo_svg,  "entypo.svg")
        download(entypo_woff, "entypo.woff")
    except Exception as e:
        raise RuntimeError("Unable to download necessary files:\n{0}".format(e))

    # Fix the two spelling errors I found
    with codecs.open("entypo.css", "r", "utf-8") as css:
        css_contents = css.read()

    css_contents = css_contents.replace("dribbble", "dribble").replace("instagrem", "instagram")
    with codecs.open("entypo.css", "w", "utf-8") as css:
        css.write(css_contents)

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
                # {code:0>8} format spec says using code variable, align it to
                # the right and make it a fixed width of 8 characters, padding
                # with a 0.  AKA zero-fill on the left until 8 char long
                icon_code = "0x{code:0>8}".format(code=icon_code.upper())
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
        /*
             NanoGUI was developed by Wenzel Jakob <wenzel.jakob@epfl.ch>.
             The widget drawing code is based on the NanoVG demo application
             by Mikko Mononen.

             All rights reserved. Use of this source code is governed by a
             BSD-style license that can be found in the LICENSE.txt file.
         */
        /**
         * \file nanogui/entypo.h
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
         * .. warning::
         *
         *    Constants you may have used in the past e.g. ``ENTYPO_ICON_CHEVRON_*`` no
         *    longer exist with the updated entypo icons.  Search for
         *    ``ENTYPO_ICON_DOWN_OPEN`` to see the new names of the ``CHEVRON`` icons.
         *
         * .. tip::
         *
         *    In C++, ``#include <nanogui/entypo.h>`` to gain access to the ``#define``
         *    shown in these docs.  In Python, ``entypo.ICON_DOWN_OPEN`` means that the
         *    ``ICON_DOWN_OPEN`` constant is defined in the ``nanogui.entypo`` module.
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
         *          <col width="20%" align="center" />
         *        </colgroup>
         *        <thead valign="bottom">
         *          <tr class="row-odd">
         *            <th class="head">C++ Definition</th>
         *            <th class="head">Python Definition</th>
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
        cpp_def = icon_def.split(" ")[1]
        py_def  = cpp_def.split("ENTYPO_ICON_")[1]
        pybind  = "C({0});".format(py_def)
        py_name = "entypo.ICON_{0}".format(py_def)

        entypo_h.write(textwrap.dedent('''
            *          <tr class="{row_kind}">
            *            <td><code>{cpp_def}</code></td>
            *            <td><code>{py_name}</code></td>
            *            <td><span class="icon-{name}"></span></td>
            *          </tr>
        '''.format(
            row_kind=row_kind,
            cpp_def=cpp_def,
            py_name=py_name,
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

    # generate the example icon programs
    cpp_example = open("exampleIcons.cpp", "w")

    # write the header of the cpp example
    cpp_example.write(textwrap.dedent(r'''
        /*
            src/exampleIcons.cpp -- C++ version of an example application that shows
            all available Entypo icons as they would appear in NanoGUI itself.  For a Python
            implementation, see '../python/exampleIcons.py'.

            NanoGUI was developed by Wenzel Jakob <wenzel.jakob@epfl.ch>.
            The widget drawing code is based on the NanoVG demo application
            by Mikko Mononen.

            All rights reserved. Use of this source code is governed by a
            BSD-style license that can be found in the LICENSE.txt file.
        */

        #include <nanogui/nanogui.h>
        using namespace nanogui;

        // add a button to the wrapper with a fixed size
        // `icon` should be the defined constant in nanogui/entypo.h
        // the button label will be the string that represents this
        #define ADD_BUTTON(icon)                                   \
            auto b_##icon = new Button(wrapper, #icon, icon);      \
            b_##icon->setIconPosition(Button::IconPosition::Left); \
            b_##icon->setFixedWidth(half_width);

        int main(int /* argc */, char ** /* argv */) {
            nanogui::init();

            /* scoped variables */ {
                static constexpr int width      = 800;
                static constexpr int half_width = width / 2;
                static constexpr int height     = 800;

                // create a fixed size screen with one window
                Screen *screen = new Screen({width, height}, "NanoGUI Icons", false);
                Window *window = new Window(screen, "All Icons");
                window->setPosition({0, 0});
                window->setFixedSize({width, height});

                // attach a vertical scroll panel
                auto vscroll = new VScrollPanel(window);
                vscroll->setFixedSize({width, height});

                // vscroll should only have *ONE* child. this is what `wrapper` is for
                auto wrapper = new Widget(vscroll);
                wrapper->setFixedSize({width, height});
                wrapper->setLayout(new GridLayout());// defaults: 2 columns

                ////////////////////////////////////////////////////////////////////////
                ////////////////////////////////////////////////////////////////////////
                ////////////////////////////////////////////////////////////////////////
    ''').lstrip())

    for icon_name, icon_def, icon_code in cdefs:
        # icon_def is `#define ENTYPO_ICON_X`
        cpp_def = icon_def.split(" ")[1]
        cpp_example.write("        ADD_BUTTON({cpp_def})\n".format(cpp_def=cpp_def))

    # close out the cpp example
    cpp_example.write(textwrap.dedent('''
                ////////////////////////////////////////////////////////////////////////
                ////////////////////////////////////////////////////////////////////////
                ////////////////////////////////////////////////////////////////////////

                screen->performLayout();
                screen->setVisible(true);

                nanogui::mainloop();
            }

            nanogui::shutdown();
            return 0;
        }
    ''').replace("\n", "", 1))
    cpp_example.close()

    # <3 python
    with open("exampleIcons.py", "w") as py_example:
        py_example.write(textwrap.dedent('''
            # python/exampleIcons.py -- Python version of an example application that shows
            # all available Entypo icons as they would appear in NanoGUI itself.  For a C++
            # implementation, see '../src/exampleIcons.cpp'.
            #
            # NanoGUI was developed by Wenzel Jakob <wenzel.jakob@epfl.ch>.
            # The widget drawing code is based on the NanoVG demo application
            # by Mikko Mononen.
            #
            # All rights reserved. Use of this source code is governed by a
            # BSD-style license that can be found in the LICENSE.txt file.

            import gc

            import nanogui
            from nanogui import Screen, Window, Widget, GridLayout, VScrollPanel, Button
            from nanogui import entypo

            if __name__ == "__main__":
                nanogui.init()

                width      = 800
                half_width = width // 2
                height     = 800

                # create a fixed size screen with one window
                screen = Screen((width, height), "NanoGUI Icons", False)
                window = Window(screen, "All Icons")
                window.setPosition((0, 0))
                window.setFixedSize((width, height))

                # attach a vertical scroll panel
                vscroll = VScrollPanel(window)
                vscroll.setFixedSize((width, height))

                # vscroll should only have *ONE* child. this is what `wrapper` is for
                wrapper = Widget(vscroll)
                wrapper.setFixedSize((width, height))
                wrapper.setLayout(GridLayout())  # defaults: 2 columns

                # NOTE: don't __dict__ crawl in real code!
                # this is just because it's more convenient to do this for enumerating all
                # of the icons -- see cpp example for alternative...
                for key in entypo.__dict__.keys():
                    if key.startswith("ICON_"):
                        b = Button(wrapper, key, entypo.__dict__[key])
                        b.setIconPosition(Button.IconPosition.Left)
                        b.setFixedWidth(half_width)

                screen.performLayout()
                screen.drawAll()
                screen.setVisible(True)

                nanogui.mainloop()

                del screen
                gc.collect()

                nanogui.shutdown()
        ''').lstrip())
