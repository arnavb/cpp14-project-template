#!/usr/bin/env bash

# Build script for Project Name
# Usage:
# chmod +x travis_script.sh
# ./travis_script.sh

RED="\033[31;1m" # Red
GREEN="\033[32;1m" # Green
CYAN="\033[36;1m" # Cyan
CL="\033[0m" # Closing

print_color() { # Utility function to print colored text
    printf -e "$1$2${CL}\n"
}

build_command() {
    cmake -DCMAKE_BUILD_TYPE=Release -DBUILD_TESTS=On ..
    make
}

if ! [ -x "$(command -v cmake)" ]; then # Make sure CMake exists
    print_color "$RED" "Error! CMake was not found!"
    exit 1
fi

print_color "$CYAN" "Project: cpp-project-template\n"

print_color "$CYAN" "BUILD\n"

mkdir -p build
cd build || exit 1

if ! build_command; then # Check the exit code from make
    print_color "$RED" "Error! Unable to build project!"
    exit 1
fi

print_color "$CYAN" "\nTEST\n"

if ! make test; then # Check the exit code from make test
    print_color "$RED" "Error! Not all tests passed!"
    exit 1
fi

print_color "$CYAN" "\nINSTALL\n"

if ! sudo make install; then # Check the error code from make install
    print_color "$RED" "Error! Unable to install targets!"
    exit 1
fi

print_color "$GREEN" "\nSuccess: Project completely built, all tests passed, and all targets installed."
