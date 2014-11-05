#!/bin/sh
mkdir -p m4
touch NEWS README AUTHORS ChangeLog COPYING
libtoolize
export LIBTOOL=/usr/bin/libtool ; autoreconf --force --install -I config -I m4
#rm NEWS README AUTHORS ChangeLog COPYING INSTALL

#set -x
#mkdir -p m4
#aclocal -I config
#autoheader
#libtoolize
#automake --foreign --add-missing --copy
#autoconf
