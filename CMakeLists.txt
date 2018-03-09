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

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/Modules/")

if (NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE "Release" CACHE STRING "Choose the build type (Debug/Release)")
endif(NOT CMAKE_BUILD_TYPE)

if (CMAKE_CONFIGURATION_TYPES)
    set(CMAKE_CONFIGURATION_TYPES "Debug;Release" CACHE STRING "Configuration types" FORCE)
endif(CMAKE_CONFIGURATION_TYPES)

if (CMAKE_BUILD_TYPE STREQUAL "Debug")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -Wall -Wextra")
elseif(CMAKE_BUILD_TYPE STREQUAL "Release")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O2")
endif(CMAKE_BUILD_TYPE STREQUAL "Debug")

include_directories(include)
include_directories(${PROJECT_BINARY_DIR})

add_subdirectory(src/project-abbr)

include(CTest)
enable_testing()
add_subdirectory(tests)
