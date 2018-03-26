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
