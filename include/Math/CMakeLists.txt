cmake_minimum_required(VERSION 3.16)

project(Math)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Werror -std=c++17")

set(SRC_CPP_API
    Vector3.cpp
    Matrix33.cpp
)

add_library(${PROJECT_NAME} STATIC ${SRC_CPP_API})

target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_SOURCE_DIR})
