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
