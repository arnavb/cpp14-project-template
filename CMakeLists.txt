cmake_minimum_required(VERSION 3.1)

project(Project-Name)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(VERSION_MAJOR 0)
set(VERSION_MINOR 1)
set(VERSION_PATCH 0)
set(VERSION ${VERSION_MAJOR}.${VERSION_MINOR}.${VERSION_PATCH})

configure_file(
    "${PROJECT_SOURCE_DIR}/include/config.h.in"
    "${PROJECT_BINARY_DIR}/config.h"
)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/Modules/")

if (NOT CMAKE_BUILD_TYPE AND NOT CMAKE_CONFIGURATION_TYPES)
    message(STATUS "Setting build type to 'Release' as no build type was specified")
    set(CMAKE_BUILD_TYPE "Release" CACHE STRING "Choose the build type (Debug/Release)")
endif (NOT CMAKE_BUILD_TYPE AND NOT CMAKE_CONFIGURATION_TYPES)

option(BUILD_TESTS "Build test executable" OFF)

if (ENABLE_COVERAGE AND NOT CMAKE_CONFIGURATION_TYPES)
    if (NOT CMAKE_BUILD_TYPE STREQUAL "Debug")
        message(STATUS "Coverage in a non-debug build may lead to misleading results! Setting build type to 'Debug'!")
        set(CMAKE_BUILD_TYPE "Debug" CACHE STRING "" FORCE)
    endif (NOT CMAKE_BUILD_TYPE STREQUAL "Debug")
    
    include(CodeCoverage)
    
    if (NOT BUILD_TESTS)
        message(STATUS "Tests must be enabled in a coverage build! Setting BUILD_TESTS to On!")
        set(BUILD_TESTS On CACHE STRING "" FORCE)
    endif (NOT BUILD_TESTS)
    
    set(COVERAGE_EXCLUDES 'tests/*')
    
    include(CodeCoverage)
    
    include_directories(include ${PROJECT_BINARY_DIR})
    add_subdirectory(src)
    
    target_compile_options(Project-Name-lib PRIVATE "--coverage")
    
    SETUP_TARGET_FOR_COVERAGE(NAME coverage EXECUTABLE tests DEPENDENCIES coverage)
else (ENABLE_COVERAGE AND NOT CMAKE_CONFIGURATION_TYPES)
    if (CMAKE_CXX_COMPILER_ID MATCHES "Clang" OR CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
        set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Werror")
        set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -g")
        set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -O2")
    elseif (CMAKE_CXX_COMPILER_ID STREQUAL "MSVC")
        set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /W4 /WX")
        set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} /O2")
    endif(CMAKE_CXX_COMPILER_ID MATCHES "Clang" OR CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
    
    include_directories(include ${PROJECT_BINARY_DIR})
    add_subdirectory(src)
endif (ENABLE_COVERAGE AND NOT CMAKE_CONFIGURATION_TYPES)

if (BUILD_TESTS)
    include(CTest)
    enable_testing()
    add_subdirectory(tests)
endif (BUILD_TESTS)

