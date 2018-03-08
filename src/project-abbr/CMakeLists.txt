add_executable(Project-Name main.cpp) # The main executable
add_library(Project-Name-lib HelloWorld.cpp Factorial.cpp) # A library for tests

SET_TARGET_PROPERTIES(Project-Name-lib PROPERTIES PREFIX "") # Remove the lib prefix

target_link_libraries(Project-Name Project-Name-lib) # Link our sources to the executable
