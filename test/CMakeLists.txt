set(TEST_SOURCES
    factorial_test.cpp
    hello_world_test.cpp
)

add_library(doctest INTERFACE)
target_include_directories(doctest INTERFACE 
    "${CMAKE_SOURCE_DIR}/third_party/doctest"
)

add_executable(test_runner test_runner.cpp ${TEST_SOURCES})
target_link_libraries(test_runner Project-Name-lib doctest)

add_test(all_tests test_runner)
