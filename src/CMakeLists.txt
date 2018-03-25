# src/CMakeLists.txt - Contains CMake configuration for source files
# Copyright 2018 Arnav Borborah
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

set(LIBRARY_SOURCES
    factorial.cpp
    hello_world.cpp
)

add_library(Project-Name-lib ${LIBRARY_SOURCES}) # A library
set_target_properties(Project-Name-lib PROPERTIES PREFIX "") # Remove the lib prefix

add_executable(Project-Name main.cpp) # The main executable
target_link_libraries(Project-Name Project-Name-lib) # Link our sources to the executable

# Install the built library and executable into the appropriate directory
install(TARGETS Project-Name DESTINATION bin)
install(TARGETS Project-Name-lib
    ARCHIVE DESTINATION lib
    LIBRARY DESTINATION lib
    RUNTIME DESTINATION bin
)
