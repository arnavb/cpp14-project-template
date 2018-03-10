#!/usr/bin/env bash

# Build script for Project Name
# Usage:
# chmod +x run_build.sh
# ./run_build.sh

RED="\033[0;31m" # Red
GREEN="\033[0;32m" # Green
CYAN="\033[0;36m" # Blue
CL="\033[0m" # Closing

print_color() { # Utility function to print colored text
    echo -e "$1$2${CL}"
}

if ! [ -x $(command -v cmake) ]; then # Make sure CMake exists
    print_color $RED "Error! CMake was not found!"
    exit 1
fi

print_color $CYAN "Building project...\n"

mkdir -p build
cd build

cmake -DCMAKE_BUILD_TYPE=Release .. && make

if [ $? -ne 0 ]; then # Check the exit code from make
    print_color $RED "Error! Unable to build project!"
    exit 1
fi

echo -e ""

make test # Run all tests

if [ $? -ne 0 ]; then # Check the exit code from ctest
    print_color $RED "Error! Not all tests passed!"
    exit 1
fi

print_color $GREEN "\nSuccess: Project completely built and all tests passed."
