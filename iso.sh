#!/bin/sh
set -e
. ./build.sh

mkdir -p isodir
mkdir -p isodir/boot
mkdir -p isodir/boot/grub

cp sysroot/boot/vanos.kernel isodir/boot/vanos.kernel
cat > isodir/boot/grub/grub.cfg << EOF
menuentry "VanOS" {
	multiboot /boot/vanos.kernel
}
EOF
grub-mkrescue -o vanos.iso isodir
