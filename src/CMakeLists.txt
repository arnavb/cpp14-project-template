# src/CMakeLists.txt - Contains CMake configuration for source files
# Copyright (C) 2018  Arnav Borborah
#
# This program is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program.  If not, see <http://www.gnu.org/licenses/>.

add_executable(Project-Name main.cpp) # The main executable
add_library(Project-Name-lib hello_world.cpp factorial.cpp) # A library for tests

SET_TARGET_PROPERTIES(Project-Name-lib PROPERTIES PREFIX "") # Remove the lib prefix

target_link_libraries(Project-Name Project-Name-lib) # Link our sources to the executable

# Install the built library and executable into the appropriate directory
install(TARGETS Project-Name DESTINATION bin)
install(TARGETS Project-Name-lib
    ARCHIVE DESTINATION lib
    LIBRARY DESTINATION lib
    RUNTIME DESTINATION bin
)
