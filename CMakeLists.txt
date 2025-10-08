
cmake_minimum_required(VERSION 3.16)

project(Math)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(include/Math)
add_subdirectory(example)
add_subdirectory(test)

enable_testing()
add_test(test_all test/Math_Test)
