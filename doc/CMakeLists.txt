# doc/CMakeLists.txt - Contains CMake configuration for documentation
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

find_package(Doxygen)

if (DOXYGEN_FOUND)
    set(DOXYGEN_IN Doxyfile.in)
    set(DOXYGEN_OUT ${CMAKE_CURRENT_BINARY_DIR}/Doxyfile)
    
    configure_file(${DOXYGEN_IN} ${DOXYGEN_OUT} @ONLY)
    
    add_custom_target(doc
        COMMAND ${DOXYGEN_EXECUTABLE} ${DOXYGEN_OUT}
        WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
        VERBATIM
    )
    
    # Install the project's HTML documentation
    install(DIRECTORY ${CMAKE_BINARY_DIR}/doc/html/ DESTINATION share/project-abbr/doc)
else (DOXYGEN_FOUND)
    message(FATAL_ERROR "Doxygen needs to be installed to generate documentation!")
endif (DOXYGEN_FOUND)