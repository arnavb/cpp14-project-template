# test/CMakeLists.txt - Contains CMake configuration for unit test
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

set(TEST_SOURCES factorial_test.cpp hello_world_test.cpp)

add_executable(test_runner test_runner.cpp ${TEST_SOURCES})
target_link_libraries(test_runner Project-Name-lib)
target_include_directories(test_runner PRIVATE ${CATCH_INCLUDE_DIR} ${COMMON_INCLUDES})

include(ParseAndAddCatchTests)
ParseAndAddCatchTests(test_runner)
