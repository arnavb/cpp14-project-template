cmake_minimum_required(VERSION 3.2)

project(Project-Name)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(Project-Name_MAJOR_VERSION 0)
set(Project-Name_MINOR_VERSION 1)
set(Project-Name_PATCH_VERSION 0)
set(Project-Name_VERSION ${Project-Name_MAJOR_VERSION}.${Project-Name_MINOR_VERSION}.${Project-Name_PATCH_VERSION})

configure_file(
    "${PROJECT_SOURCE_DIR}/include/config.h.in"
    "${PROJECT_BINARY_DIR}/config.h"
)

include_directories(include)
include_directories(${PROJECT_BINARY_DIR})
add_subdirectory(src/project-abbr)
