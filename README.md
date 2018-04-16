# Project Name

[![Travis Build Status](https://travis-ci.org/arnavb/cpp14-project-template.svg?branch=master)](https://travis-ci.org/arnavb/cpp14-project-template)
[![Appveyor Build Status](https://ci.appveyor.com/api/projects/status/qvt257817g7c66m9/branch/master?svg=true)](https://ci.appveyor.com/project/arnavb/cpp14-project-template/branch/master)
[![Coverity Scan Build Status](https://scan.coverity.com/projects/15312/badge.svg)](https://scan.coverity.com/projects/arnavb-cpp14-project-template)
[![codecov](https://codecov.io/gh/arnavb/cpp14-project-template/branch/master/graph/badge.svg)](https://codecov.io/gh/arnavb/cpp14-project-template)
[![Codacy Badge](https://api.codacy.com/project/badge/Grade/1c76469660ca411fa1f92ce0ef0c5cd3)](https://www.codacy.com/app/arnavb/cpp14-project-template?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=arnavb/cpp14-project-template&amp;utm_campaign=Badge_Grade)
[![Documentation](https://codedocs.xyz/arnavb/cpp14-project-template.svg)](https://codedocs.xyz/arnavb/cpp14-project-template/)

A simple template I plan on using for all of my C++14 projects.

Making cross platform C++ projects is widely known to be a troublesome ambition. This project attempts to demystify many of the common problems related to creating such a structure by providing a simple template that achieves this purpose.

## Getting Started

### Configuring the Template
In order to use this project, all you have to do is follow a few (Ok, more than a few) simple steps:

1. `git clone` this project into a directory of choice.
2. Replace all of the templated files in this project with the corresponding files for _your_ project. In other words:
   1. Going through all of the files/directories, replace the following variables:
      1. `Project Name` with your project name.
      2. `project-abbr` with an abbreviation of your project name. (Or you could reuse the project name)
      3. In `./CMakeLists.txt`, replace the project version (`0.1.0` in this example) with the version you are using for your project.
   2. Replace all of the files in `include/project-abbr` with your public include files. If you are building a standalone application without a public interface, then you don't need this directory and can safely delete it. However, you will still need to modify `src/CMakeLists.txt` with the line: `target_include_directories(Project-Name-lib PRIVATE ${CMAKE_SOURCE_DIR}/src)`.
   3. Replace all of the files in `src` with all of your `.cpp` files and private includes/implementations.
   4. Replace all of the files in `test` _except_ `test_runner.cpp` with your corresponding test files.
   5. For steps 3 and 4, make sure to modify the corresponding `CMakeLists.txt` to match your new sources.
2. Delete the _by default hidden_ `.git` folder and then run `git init` to get a new repository!

### Building the Code

#### Prerequisites
The following tools must be preinstalled before using this template:
- [`CMake`](https://cmake.org/install/) (At least v3.1): For building the code.
- [`Doxygen`](https://www.stack.nl/~dimitri/doxygen/manual/install.html): For generating documentation.

In the snippets below, `CONFIGURATION` needs to be a valid [CMake configuration](https://cmake.org/cmake/help/v3.11/variable/CMAKE_BUILD_TYPE.html).

#### Linux/OSX

    mkdir build && cd build
    cmake -D<options> -DCMAKE_BUILD_TYPE=CONFIGURATION ..
    make
    make install

#### Windows

    mkdir build && cd build
    cmake -D<options> ..
    cmake --build --config CONFIGURATION .
    cmake --build --target INSTALL --config CONFIGURATION .

For more details on configuration options and build targets, see the [documentation](https://codedocs.xyz/arnavb/cpp14-project-template/variables_and_targets.html).

## Running the Tests

In order to run the tests, the option `BUILD_TESTS` needs to be set to `ON` during configuration. Then, invoking the tests is as simple as running:

    ctest

## Documentation

The documentation for this project (sample code and usage of this project) is hosted on [codedocs.xyz](https://codedocs.xyz/arnavb/cpp14-project-template/index.html).

Documentation about build targets, CMake options, the directory structure used, and documentation are all available in the link above.

## License

![CC0](http://i.creativecommons.org/p/zero/1.0/88x31.png)

To the extent possible under law, [Arnav Borborah](https://github.com/arnavb/cpp14-project-template) has waived all copyright and related or neighboring rights to C++14 Project Template. This work is published from: United States.

The above basically means that while you do not have to give me attribution for this template, it would be gladly appreciated!
