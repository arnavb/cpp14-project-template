# Taken from https://github.com/catchorg/Catch2/blob/master/docs/build-systems.md#cmake
# and slightly modified to fit the needs of this project.

include(ExternalProject)
find_package(Git REQUIRED)

ExternalProject_Add(
    catch
    PREFIX ${CMAKE_BINARY_DIR}/third_party/catch
    GIT_REPOSITORY https://github.com/catchorg/Catch2.git
    GIT_TAG v2.2.1
    TIMEOUT 10
    UPDATE_COMMAND ""
    CONFIGURE_COMMAND ""
    BUILD_COMMAND ""
    INSTALL_COMMAND ""
    LOG_DOWNLOAD ON
)

# Expose required variable (CATCH_INCLUDE_DIR) to parent scope
ExternalProject_Get_Property(catch source_dir)
set(CATCH_INCLUDE_DIR ${source_dir}/single_include CACHE INTERNAL "Path to include folder for Catch")
