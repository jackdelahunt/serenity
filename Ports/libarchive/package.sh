#!/usr/bin/env -S bash ../.port_include.sh
port=libarchive
version=3.5.1
useconfigure=true
configopts="--without-xml2"
files="https://libarchive.org/downloads/libarchive-${version}.tar.gz libarchive-${version}.tar.gz
https://libarchive.org/downloads/libarchive-${version}.tar.gz.asc libarchive-${version}.tar.gz.asc"
depends="zlib pcre"
auth_type="sig"
auth_import_key="CB55788360B992FA0885C878F040F7196BA99AF4"
auth_opts="libarchive-${version}.tar.gz.asc libarchive-${version}.tar.gz"

export ac_cv_header_regex_h=no
