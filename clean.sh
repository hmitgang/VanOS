#!/bin/sh
set -e
. ./config.sh

for PROJECT in $PROJECTS; do
  (cd $PROJECT && $MAKE clean)
done

if [[ $1 == "--keep-output" ]]; then
    rm -rf sysroot
    rm -rf isodir
    rm -rf vanos.iso
fi
