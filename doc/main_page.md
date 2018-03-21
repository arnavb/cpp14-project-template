# Project Name {#mainpage}

Making cross platform C++ projects is widely known to be a troublesome ambition. This project attempts to demystify many of the common myths related to creating such a structure by providing a simple template that achieves this purpose.


## How do I  use this?

In order to use this project, all you have to do is follow a few (Ok, not a few) simple steps:

1. `git clone` this project into a directory of choice.
2. Replace all of the templated files in this project and replace them with the corresponding files for _your_ project. In other words:
   1. Going through all of the files/directories, replace the following variables:
      1. `Project Name` with your project name.
      2. `project-abbr` with an abbreviation of your project name. (Or you could reuse the project name)
      3. In `doc/Doxyfile.in`, `./CMakeLists.txt`, and `include/project-abbr/config.hpp`, replace the project version (`0.1.0` in this example) with the version you are using for your project.
   2. Replace all of the files in `include/project-abbr` with your public include files. If you are building a standalone application without a public interface, then you don't need this directory.
   3. Replace all of the files in `src` with all of your `.cpp` files and private includes/implementations.
   4. Replace all of the files in `test` _except_ `test_runner.cpp` with your corresponding test files.
   5. For steps 3 and 4, make sure to modify the corresponding `CMakeLists.txt` to match your new sources.
2. Delete the _by default hidden_ `.git` folder and then run `git init` to get a new repository!


## Building the code

This template provides the following CMake variables (You can pass them using `-DVARNAME=VALUE`):

| Variable           | Description                                                                                    | Possible Values                                 | Default Value |
|--------------------|------------------------------------------------------------------------------------------------|-------------------------------------------------|---------------|
| `CMAKE_BUILD_TYPE` | On a single configuration generator, this string determines the build type of the application. | `Debug`/`Release`/`RelWithDebInfo`/`MinSizeRel` | `Release`     |
| `GEN_DOCS`         | An option used to determine if documentation will or will not be generated.                    | `ON`/`OFF`                                      | `OFF`         |
| `BUILD_TESTS`      | An option used to determine if the test executable should or should not be built.              | `ON`/`OFF`                                      | `OFF`         |

In addition, the following targets are explicitly provided:

| Target        | Description                                                    |
|-------------|----------------------------------------------------------------|
| `[Nothing]` | Build the application (Including `test` if `BUILD_TESTS=ON`).  |
| `test`      | If tests were built, then run all tests.                       |
| `doc`       | If `GEN_DOCS=ON`, then generate documentation using `Doxygen`. |


## Directory Structure

Ignoring all extraneous files, this is the structure that this project uses: 


    project-name/
    ├── CMakeLists.txt
    ├── cmake
    │   └── Modules
    │       └── ParseAndAddCatchTests.cmake
    ├── doc
    │   ├── CMakeLists.txt
    │   ├── Doxyfile.in
    │   ├── main_page.md
    │   └── markdown.html
    ├── include
    │   └── project-abbr
    │       ├── config.hpp
    │       ├── factorial.hpp
    │       └── hello_world.hpp
    ├── src
    │   ├── CMakeLists.txt
    │   ├── factorial.cpp
    │   ├── hello_world.cpp
    │   └── main.cpp
    ├── test
    │   ├── CMakeLists.txt
    │   ├── factorial_test.cpp
    │   ├── hello_world_test.cpp
    │   └── test_runner.cpp
    └── third_party
        └── catch
            └── CMakeLists.txt

This may all look very complex, but here is an explanation of all of the directories:

| Directory     | Purpose                                                                                                                        |
|---------------|--------------------------------------------------------------------------------------------------------------------------------|
| `cmake`       | Contains all CMake related configuration files.                                                                                |
| `doc`         | Contains Doxygen configuration files, which can be used to create documentation for the project using the CMake target `doc`.  |
| `include`     | Contains all the project public include files, namespaced in a directory which is an abbreviation of the project name.         |
| `src`         | Contains the implementations of all files in `include`. Private level includes and implementations are also in this directory. |
| `test`        | Contains test files to unit test the library portion of the application.                                                       |
| `third_party` | Contains CMake configuration files for third party dependencies, which are added using `ExternalProject_Add`.                  |

## License

This project is licensed under the [GNU GPLv3 License](https://github.com/arnavb/cpp14-project-template/blob/master/LICENSE).