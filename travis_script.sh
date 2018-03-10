#!/usr/bin/env bash

# Build script for Project Name
# Usage:
# chmod +x run_build.sh
# ./run_build.sh

RED="\033[31;1m" # Red
GREEN="\033[32;1m" # Green
CYAN="\033[36;1m" # Blue
CL="\033[0m" # Closing

print_color() { # Utility function to print colored text
    echo -e "$1$2${CL}"
}

if ! [ -x $(command -v cmake) ]; then # Make sure CMake exists
    print_color $RED "Error! CMake was not found!"
    exit 1
fi

print_color $CYAN "Project: cpp-project-template\n"
print_color $CYAN "This script will: "
print_color $CYAN "1. Build all targets using cmake and make"
print_color $CYAN "2. Run tests using make test"
print_color $CYAN "3. Install executables and libraries using make install\n"

mkdir -p build
cd build

cmake -DCMAKE_BUILD_TYPE=Release -DBUILD_TESTS=On .. && make

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

sudo make install # Install the executable and its dependencies

if [ $? -ne 0 ]; then # Check the error code from make install
    print_color $RED "Error! Unable to install targets!"
    exit 1
fi

print_color $GREEN "\nSuccess: Project completely built, all tests passed, and all targets installed."
