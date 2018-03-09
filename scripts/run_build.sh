#!/usr/bin/env bash

RED="\033[0;31m" # Red
GREEN="\033[0;32m" # Green
BLUE="\033[0;34m" # Blue
CL="\033[0m" # Closing

print_color() {
    echo -e "$1$2${CL}"
}

if [ -z $CXX ]; then
    print_color $RED "Error! No C++ compiler set!"
    exit 1
fi

if [ -z $CC ]; then
    print_color $RED "Error! No C compiler set!"
    exit 1
fi

if ! [ -x $(command -v cmake) ]; then
    print_color $RED "Error! CMake was not found!"
    exit 1
fi

print_color $BLUE "\nBuilding project...\n"
cd ..
mkdir build
cd build
cmake -DCMAKE_BUILD_TYPE=Release ..
make

if [ $? -ne 0 ]; then
    print_color $RED "Error! Unable to build project!"
    exit 1
fi

print_color $BLUE "\nRunning tests...\n"

ctest

if [ $? -ne 0 ]
then
    print_color $RED "Error! Not all tests passed!"
    exit 1
fi

print_color $GREEN "\nSuccess: Project completely built and all tests passed."