
cmake_minimum_required(VERSION 3.5)

project(API_Name)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(API)
add_subdirectory(example)
add_subdirectory(test)

enable_testing()
add_test(test_all test/API_Test)
