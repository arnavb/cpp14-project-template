include(ExternalProject)
find_package(Git REQUIRED)

ExternalProject_Add(
    cppcheck
    PREFIX ${CMAKE_BINARY_DIR}/third_party/cppcheck
    GIT_REPOSITORY https://github.com/danmar/cppcheck.git
    GIT_TAG 1.81
    TIMEOUT 10
    CMAKE_ARGS "-DCMAKE_INSTALL_PREFIX=${CMAKE_BINARY_DIR}/third_party/cppcheck/bin"
    TMP_DIR ${CMAKE_BINARY_DIR}/third_party/cppcheck/tmp
    STAMP_DIR ${CMAKE_BINARY_DIR}/third_party/cppcheck/stamp
    DOWNLOAD_DIR ${CMAKE_BINARY_DIR}/third_party/cppcheck/download
    SOURCE_DIR ${CMAKE_BINARY_DIR}/third_party/cppcheck/src
    BINARY_DIR ${CMAKE_BINARY_DIR}/third_party/cppcheck/build
    LOG_DOWNLOAD ON
)

add_custom_target(
    analysis
    COMMAND ${CMAKE_BINARY_DIR}third_party/cppcheck/bin/cppcheck
    --enable=all
    --suppress=missingIncludeSystem
    --error-exitcode=1
    -I${CMAKE_SOURCE_DIR}/include
    ${CMAKE_SOURCE_DIR}/src
)
