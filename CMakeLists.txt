
cmake_minimum_required(VERSION 3.5)

project(AKMath)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(AKMath)
add_subdirectory(example)
add_subdirectory(test)

enable_testing()
add_test(test_all test/AKMath_Test)
