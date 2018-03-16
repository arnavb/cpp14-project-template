set(TEST_SOURCES test_hello_world.cpp test_factorial.cpp)

add_executable(tests main.cpp ${TEST_SOURCES})
target_link_libraries(tests Project-Name-lib)

include(ParseAndAddCatchTests)
ParseAndAddCatchTests(tests)
