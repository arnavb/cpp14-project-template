add_executable(Executable-Name main.cpp) # The main executable
add_library(Executable-Name-lib HelloWorld.cpp) # A library for tests

SET_TARGET_PROPERTIES(Executable-Name-lib PROPERTIES PREFIX "") # Remove the lib prefix

target_link_libraries(Executable-Name Executable-Name-lib) # Link our sources to the executable
