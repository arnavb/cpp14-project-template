# CMake Variables and Targets {#variables_and_targets}

\tableofcontents

This project provides some CMake variables for use during configuration and other explicitly specified build targets.

\section variables CMake Variables

| Variable           | Description                                                                                    | Possible Values                                 | Default Value |
|--------------------|------------------------------------------------------------------------------------------------|-------------------------------------------------|---------------|
| `CMAKE_BUILD_TYPE` | On a single configuration generator, this string determines the build type of the application. | `Debug`/`Release`/`RelWithDebInfo`/`MinSizeRel` | `Release`     |
| `GEN_DOCS`         | An option used to determine if documentation will or will not be generated.                    | `ON`/`OFF`                                      | `ON`         |
| `BUILD_TESTS`      | An option used to determine if the test executable should or should not be built.              | `ON`/`OFF`                                      | `OFF`         |
| `ENABLE_COVERAGE`      | An option used to determine whether coverage should be enabled or not              | `ON`/`OFF`                                      | `OFF`         |

\section targets Build Targets

| Target           | Description                                                    |
|------------------|----------------------------------------------------------------|
| `[Nothing]`      | Build the application (Including `test` if `BUILD_TESTS=ON`).  |
| `install`        | Install all built targets.                                     |
| `test`           | If tests were built, then run all tests.                       |
| `doc`            | If `GEN_DOCS=ON`, then generate documentation using `Doxygen`. |
| `coverage`       | If `ENABLE_COVERAGE=ON`, then generate code coverage.          |
