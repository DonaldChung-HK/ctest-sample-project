project(muster)
cmake_minimum_required(VERSION 2.8)

add_executable(test test.cpp)
add_executable(flaky_test flaky_test.cpp)
add_executable(timeout_test timeout_test.cpp)

configure_file(${CMAKE_CURRENT_SOURCE_DIR}/message_a.txt
    ${CMAKE_CURRENT_BINARY_DIR} COPYONLY)

configure_file(${CMAKE_CURRENT_SOURCE_DIR}/message_b.txt
    ${CMAKE_CURRENT_BINARY_DIR} COPYONLY)

enable_testing()

add_test(success_test test 0)

add_test(fail_test test 1)

add_test(flaky_test flaky_test)

add_test(time_out timeout_test)
set_tests_properties(time_out PROPERTIES TIMEOUT 5)

add_test(success_test_2 test 0)

add_test(fail_test_2 test 1)

add_test(flaky_test_2 flaky_test)

add_test(success_test_3 test 0)

