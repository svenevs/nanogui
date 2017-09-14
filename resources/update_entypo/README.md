# Updating Entypo

## Setup

I used `pycurl` because python3 `urllib.request` kept giving `404` errors when
trying to download from github raw.  For OSX you may have trouble getting this
setup properly due to the outdated system `libcurl`.  Fixing is easy, assuming
you have `brew` you would

```console
$ brew install curl
```

Then add to your `~/.bashrc` or `~/.bash_profile`:

```bash
# brew curl
export PATH="/usr/local/opt/curl/bin:$PATH"
export LD_LIBRARY_PATH="/usr/local/opt/curl/lib:$LD_LIBRARY_PATH"
```

Then install `pycurl`.

```console
$ pip3 --no-cache-dir install pycurl
```

The `--no-cache-dir` is useful if you had a failed installation that reports
something like `link-time version is older than compile-time libcurl`.  This
option for `pip` simply forces it to rebuild the wheel.

## Usage

Just execute `./generate.py` for `python3` or `python generate.py` for `python 2`.
It will download the new TTF and CSS, and generate `entypo.h` for NanoGUI.

Note: it's unlikely these will need to be updated ever again.

## Finalize

Just execute `./do_copy.py` and it will copy everything to where it needs to go.
Read the file to see what gets copied where, or run it and `git status`.
You can always `git reset --hard` to undo.

