set(TEST_SOURCES TestHelloWorld.cpp TestFactorial.cpp)

add_executable(tests main.cpp ${TEST_SOURCES})
target_link_libraries(tests Project-Name-lib)

include(ParseAndAddCatchTests)
ParseAndAddCatchTests(tests)