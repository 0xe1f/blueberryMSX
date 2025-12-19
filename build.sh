#!/bin/bash

HOST="$1"
DEST="$2"

if [ -z "$HOST" ] || [ -z "$DEST" ]; then
    echo "Error: missing arguments. Usage: $0 host dest_path" >&2
    exit 1
fi

set -e
cd `dirname $(readlink -f $0)`
echo "Building..." >&2

make
ssh -o "StrictHostKeyChecking no" $HOST -t "mkdir -p $DEST/bluemsx"
scp -o "StrictHostKeyChecking no" -r bluemsx launch.sh stop.sh Machines/ $HOST:$DEST/bluemsx/
