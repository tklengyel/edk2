#!/bin/bash

nasm_version=$(nasm --version | awk '{ print $3 }')
if [ $nasm_version != "2.15.05" ]; then
    echo "nasm version 2.15.05 required";
    exit 1
fi

if [ ! -d edk2-platforms ]; then
    git clone --recurse-submodules https://github.com/tianocore/edk2-platforms.git
fi

if [ ! -d edk2-non-osi ]; then
    git clone --recurse-submodules https://github.com/tianocore/edk2-non-osi.git
fi

export PACKAGES_PATH=$PWD:$PWD/edk2-platforms:$PWD/edk2-non-osi
git checkout sanitizers2
. edksetup.sh --reconfig
make -C BaseTools/Source/C/
build -p OvmfPkg/OvmfPkgX64.dsc -t CLANGSAN40 -a X64 -b NOOPT -DDEBUG_ON_SERIAL_PORT
