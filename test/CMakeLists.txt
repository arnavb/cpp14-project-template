set(TEST_SOURCES
    factorial_test.cpp
    hello_world_test.cpp
)

add_executable(test_runner test_runner.cpp ${TEST_SOURCES})
target_link_libraries(test_runner Project-Name-lib)
target_include_directories(test_runner PRIVATE ${CMAKE_SOURCE_DIR}/third_party/catch)

include(ParseAndAddCatchTests)
ParseAndAddCatchTests(test_runner)
