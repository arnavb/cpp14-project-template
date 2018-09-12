# Directory Structure {#directory_structure}

Ignoring all extraneous files, this is the structure that this project uses: 

    project-name/
    ├── CMakeLists.txt
    ├── cmake/
    │   └── Modules/
    │       └── CodeCoverage.cmake
    ├── doc/
    │   ├── CMakeLists.txt
    │   ├── Doxyfile.in
    │   ├── directory_structure.md
    │   ├── main_page.md
    │   └── ...
    ├── include/
    │   └── project-abbr/
    │       ├── config.hpp.in
    │       ├── factorial.hpp
    │       └── hello_world.hpp
    ├── src/
    │   ├── factorial.cpp
    │   ├── hello_world.cpp
    │   └── main.cpp
    ├── test/
    │   ├── CMakeLists.txt
    │   ├── factorial_test.cpp
    │   ├── hello_world_test.cpp
    │   └── test_runner.cpp
    └── third_party/
        └── doctest/
            └── doctest.h

This may all look very complex, but here is an explanation of all of the directories:

| Directory     | Purpose                                                                                                                        |
|---------------|--------------------------------------------------------------------------------------------------------------------------------|
| `cmake`       | Contains all CMake related configuration files.                                                                                |
| `doc`         | Contains Doxygen configuration files, which can be used to create documentation for the project using the CMake target `doc`.  |
| `include`     | Contains all the project public include files, namespaced in a directory which is an abbreviation of the project name.         |
| `src`         | Contains the implementations of all files in `include`. Private level includes and implementations are also in this directory. |
| `test`        | Contains test files to unit test the library portion of the application.                                                       |
| `third_party` | Contains CMake configuration files for third party dependencies or single header files for projects with single includes.|
