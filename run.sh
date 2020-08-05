#!/bin/bash


set -e

usage() {
    echo "Usage: $0 [-d|--debug] <ClassicUO.exe>      [defaults to ../ClassicUO/bin/Debug/ClassicUO.exe]" >&2
    exit 1
}

PLUGIN=$(pwd)/bin/Plugin.dylib

while (("$#")); do
    case "$1" in
    -d | --debug)
        DEBUG="--debug --debugger-agent=transport=dt_socket,server=y,address=127.0.0.1:55555"
        shift 1
        ;;
      -*|--*=) # unsupported flags
        usage
        ;;
    *) # preserve positional arguments
        PARAMS="$PARAMS $1"
        shift
        ;;
    esac
done

eval set -- "$PARAMS"

if [ -z $1 ]; then
    CUO=../ClassicUO/bin/Debug/ClassicUO.exe
else
    CUO=$1
fi

if [ ! -f $CUO ]; then
    echo "$CUO not found" >&2
    usage
fi

if [ ! -f $PLUGIN ]; then
    echo "Plugin does not exist. Running make..."
    make >/dev/null
fi

[ ! -z "$DEBUG" ] && echo "Waiting for debugger..."
DYLD_LIBRARY_PATH=$(dirname $CUO)/osx mono $DEBUG $CUO -plugins $(pwd)/bin/Plugin.dylib
