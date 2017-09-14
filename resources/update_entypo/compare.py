#!/usr/bin/env python3

import os
import textwrap


def getDefDict(file_path):
    '''
    Parses file_path (assumed to exist) and returns a dictionary where
    - keys: ENTYPO_ICON_*
    - values: hex value
    '''
    all_defs = {}
    with open(file_path, "r") as f:
        for line in f:
            if line.startswith("#define"):
                define, name, value = line.split()
                all_defs[name] = value

    return all_defs


# entypo's website claims 411, but both the CSS and test html page have 284
# this is used in `generate.py` as well
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

    entypo_h        = os.path.join(file_loc, "entypo.h")
    legacy_entypo_h = os.path.join(file_loc, "legacy_entypo.h")

    if not os.path.exists(entypo_h):
        raise RuntimeError(
            "[{0}] does not exist, did you `generate`?".format(entypo_h)
        )

    if not os.path.exists(legacy_entypo_h):
        raise RuntimeError(textwrap.dedent('''
            [{0}] does not exist, cannot compare!  There should have *ALREADY*
            been a file `legacy_entypo.h` in this directory, which was downloaded
            from

                https://raw.githubusercontent.com/wjakob/nanogui/master/include/nanogui/entypo.h

            Please re-download that, noting that you'll need to re-generate after
            renaming that to `legacy_entypo.h`.
        '''.format(legacy_entypo_h)))


    # parse the files and get the defines
    cdefs = getDefDict(entypo_h)
    legacy_cdefs = getDefDict(legacy_entypo_h)

    cdef_keys = set(cdefs.keys())
    legacy_keys = set(legacy_cdefs.keys())

    new_keys = cdef_keys - legacy_keys
    missing  = legacy_keys - cdef_keys
    same     = cdef_keys & legacy_keys

    if len(legacy_keys) != EXPECTED_NUM_ICONS:
        raise RuntimeError(
            "Found [{0}] new keys, expected [{1}].".format(len(legacy_keys),
                                                           EXPECTED_NUM_ICONS)
        )

    # first, check that the same ones match up
    bad = {}
    good = {}
    for key in same:
        cdef_val = cdefs[key]
        legacy_val = legacy_cdefs[key]
        if cdef_val != legacy_val:
            bad[key] = (cdef_val, legacy_val)
        else:
            good[key] = cdef_val

    if bad:
        for key in bad:
            print("Error for [{0}]: new := [{1}] ; old := {2}".format(
                key, *bad[key]
            ))

    print("\nNum good: {0}".format(len(good)))

    print("\nMissing keys: [{0}]".format(len(missing)))
    for key in missing:
        val = legacy_cdefs[key]
        print("{0}: {1}".format(key, val))
        for key in cdefs:
            new_val = cdefs[key]
            if new_val == val:
                print("  - mismatch: new def is [{0}]".format(key))
                break


