set(TEST_SOURCES
    factorial_test.cpp
    hello_world_test.cpp
)

add_library(Catch INTERFACE)
target_include_directories(Catch INTERFACE 
    "${CMAKE_SOURCE_DIR}/third_party/catch"
)

add_executable(test_runner test_runner.cpp ${TEST_SOURCES})
target_link_libraries(test_runner Project-Name-lib Catch)

include(ParseAndAddCatchTests)
ParseAndAddCatchTests(test_runner)
