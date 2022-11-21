#!/bin/sh
set -e
. ./headers.sh

for PROJECT in $PROJECTS; do
  (cd $PROJECT && DESTDIR="$SYSROOT" $MAKE install)
done

if [[ $1 != "--keep-output" ]]; then
  ./clean.sh
fi
