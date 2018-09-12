# Project Name

[![Travis Build Status](https://travis-ci.org/arnavb/cpp14-project-template.svg?branch=master)](https://travis-ci.org/arnavb/cpp14-project-template)
[![Appveyor Build Status](https://ci.appveyor.com/api/projects/status/qvt257817g7c66m9/branch/master?svg=true)](https://ci.appveyor.com/project/arnavb/cpp14-project-template/branch/master)
[![Coverity Scan Build Status](https://scan.coverity.com/projects/15312/badge.svg)](https://scan.coverity.com/projects/arnavb-cpp14-project-template)
[![codecov](https://codecov.io/gh/arnavb/cpp14-project-template/branch/master/graph/badge.svg)](https://codecov.io/gh/arnavb/cpp14-project-template)
[![Codacy Badge](https://api.codacy.com/project/badge/Grade/1c76469660ca411fa1f92ce0ef0c5cd3)](https://www.codacy.com/app/arnavb/cpp14-project-template?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=arnavb/cpp14-project-template&amp;utm_campaign=Badge_Grade)
[![Documentation](https://codedocs.xyz/arnavb/cpp14-project-template.svg)](https://codedocs.xyz/arnavb/cpp14-project-template/)

A simple, cross-platform, and continuously integrated C++14 project template.

Making cross platform C++ projects is widely known to be a troublesome ambition. This project attempts to demystify many of the common problems related to creating such a structure by providing a simple template that achieves this purpose.

## Getting Started

### Configuring the Template

(Unfortunately, a setup script isn't currently available but is being worked on in [#3](https://github.com/arnavb/cpp14-project-template/pull/3). Until it is, however, these steps have to be followed manually.)

In order to use this project, all you have to do is follow a few (Ok, more than a few) simple steps:

1. `git clone` this project into a directory of choice.
2. Open the file `.codedocs` and replace the variables `PROJECT_NAME`, `PROJECT_NUMBER`, and `PROJECT_NUMBER` with their corresponding values.
3. Open the file `.travis.yml`, and replace the encrypted Coverity Scan token with the one for your project. In addition, modify the variables in the following section with their corresponding values:
   ```
   project:
     name: "arnavb/cpp14-project-template"
     description: "A cross-platform C++14 project template"
   notification_email: arnavborborah11@gmail.com
   ```
4. In `./CMakeLists.txt`, modify:
    1. `Project-Name` to match your project name.
    2. `Project-Name_VERSION_MAJOR`, `Project-Name_VERSION_MINOR`, and `Project-Name_VERSION_PATCH` to match the versioning of your project. Make sure to modify the names of the variables as well!
    3. Modify `PROJ_NAME` to be the name of your project.
    4. Do the same for `PROJECT_DESCRIPTION`.
    5. If you are building just a library, then remove `${CMAKE_SOURCE_DIR}/src/main.cpp` from `COVERAGE_EXCLUDES`.
    6. Modify the `LIBRARY_SOURCES` variable to match your project sources. Exclude `main.cpp`, if it exists.
    7. If you are building a standalone library, then remove the following lines:
       ```
       add_executable(Project-Name main.cpp) # The main executable
       target_link_libraries(Project-Name Project-Name-lib) # Link our sources to the executable
       ```
       And later on in the file, remove:
       ```
       # Install the built library and executable into the appropriate directory
       install(TARGETS Project-Name DESTINATION bin)
       ```
    8. Change the name `Project-Name` and `Project-Name-lib` to match your project name.
    9. Change:
       ```
       install(FILES ${CMAKE_BINARY_DIR}/include/project-abbr/config.hpp DESTINATION include/project-abbr) # Install our configuration file
       ```
       to match the new folder name for your project, as described in step 8.
5. Modify `LICENSE` to match your software license.
6. Modify this file (`README.md`) to match the details of your project. You may want to keep the build steps, however.
7. Open the folder `doc`. Then:
    1. Delete all the markdown pages from this directory and replace them with your own.
    2. If a main page is needed, it needs to be in a file called `main_page.md`.
8. Open the folder `include`. Then:
    1. Change the name of the folder `project-abbr` to something that matches your project (name or abbreviation). Delete all the files _except_ `config.hpp.in` in this directory and replace them with your public include files, if they exist.
9. Open the folder `src`. Then:
    1. Remove all of the `.cpp` files in this folder and replace them with your source files and private includes.
10. Open the folder `test`. Then:
    1. Replace all the files in this directory _except_ for `test_runner.cpp` with your doctest unit testing files.
    2. In `test/CMakeLists.txt`, change `Project-Name-lib` to match the new name of your library. In addition, modify the `TEST_SOURCES` variable to match your new test files.
11. Delete the _by default hidden_ `.git` folder and then run `git init` to get a new repository!

For details on how to set up the various continuous integration tools used in this project, check the [documentation](https://codedocs.xyz/arnavb/cpp14-project-template/setting_up_documentation.html).

### Building the Code

#### Prerequisites
The following tools must be preinstalled before using this template:
- [`CMake`](https://cmake.org/install/) (At least v3.1): For building the code.
- [`Doxygen`](https://www.stack.nl/~dimitri/doxygen/manual/install.html): For generating documentation.
- [`LCOV`](http://ltp.sourceforge.net/coverage/lcov.php): For generating code coverage.

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

### Code Coverage

In order to get the test coverage of the code, the option `ENABLE_COVERAGE` needs to be set to `ON` during configuration. In addition, `CMAKE_BUILD_TYPE` should be set to `Debug` (code coverage isn't supported for multi-config generators yet). Then, a coverage report can be generated by running:

    make coverage

The resulting coverage will be placed in a directory called `coverage` in the build folder.

## Documentation

The documentation for this project (sample code and usage of this project) is hosted on [codedocs.xyz](https://codedocs.xyz/arnavb/cpp14-project-template/index.html).

Documentation about build targets, CMake options, the directory structure used, and documentation are all available in the link above.

## License

![CC0](http://i.creativecommons.org/p/zero/1.0/88x31.png)

To the extent possible under law, [Arnav Borborah](https://github.com/arnavb/cpp14-project-template) has waived all copyright and related or neighboring rights to C++14 Project Template. This work is published from: United States.

The above basically means that while you do not have to give me attribution for this template, it would be gladly appreciated!
