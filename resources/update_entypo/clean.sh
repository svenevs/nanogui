#!/usr/bin/env bash

# delete everything except for README.md, do_copy.py,
# generate.py, compare.py, legacy_entypo.h,
# and this script (clean.sh)
find . -type f -not -name README.md       -a \
               -not -name do_copy.py      -a \
               -not -name generate.py     -a \
               -not -name compare.py      -a \
               -not -name legacy_entypo.h -a \
               -not -name clean.sh           \
               -exec rm -f {} \;
