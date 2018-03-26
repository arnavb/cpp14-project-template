cmake_minimum_required(VERSION 3.1)

project(Project-Name)

set(Project-Name_VERSION_MAJOR 0)
set(Project-Name_VERSION_MINOR 1)
set(Project-Name_VERSION_PATCH 0)
set(Project-Name_VERSION "${Project-Name_VERSION_MAJOR}.${Project-Name_VERSION_MINOR}.${Project-Name_VERSION_PATCH}")

set(PROJ_NAME "\"Project Name\"") # PROJECT_NAME is a predefined variable
set(PROJECT_DESCRIPTION "\"A cross-platform C++14 project template\"")

configure_file(include/project-abbr/config.hpp.in
    ${CMAKE_BINARY_DIR}/include/project-abbr/config.hpp
)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Options
option(BUILD_TESTS "Build test executable" OFF)
option(GEN_DOCS "Generate documentation" OFF)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/Modules/")

if (NOT CMAKE_BUILD_TYPE AND NOT CMAKE_CONFIGURATION_TYPES)
    message(STATUS "Setting build type to 'Release' as no build type was specified")
    set(CMAKE_BUILD_TYPE "Release" CACHE STRING "Choose the build type (Debug/Release)" FORCE)
endif (NOT CMAKE_BUILD_TYPE AND NOT CMAKE_CONFIGURATION_TYPES)

if (CMAKE_CXX_COMPILER_ID MATCHES "Clang" OR CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Werror")
    set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -g")
    set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -O2")
elseif (CMAKE_CXX_COMPILER_ID STREQUAL "MSVC")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /W4 /WX")
    set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} /O2")
endif(CMAKE_CXX_COMPILER_ID MATCHES "Clang" OR CMAKE_CXX_COMPILER_ID STREQUAL "GNU")

include_directories(include ${CMAKE_BINARY_DIR}/include)
add_subdirectory(src)

if (BUILD_TESTS)
    add_subdirectory(third_party/catch)
    include(CTest)
    enable_testing()
    add_subdirectory(test)
endif (BUILD_TESTS)

if (GEN_DOCS)
    add_subdirectory(doc)
endif (GEN_DOCS)

# Install the project header files into the appropriate directory
install(DIRECTORY include/ DESTINATION include PATTERN "config.hpp.in" EXCLUDE) # Install our main header files
install(FILES ${CMAKE_BINARY_DIR}/include/project-abbr/config.hpp DESTINATION include/project-abbr) # Install our configuration file

# Install the project's extra files
install(FILES README.md LICENSE DESTINATION share/project-abbr)
