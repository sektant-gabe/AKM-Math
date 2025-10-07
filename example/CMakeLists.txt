cmake_minimum_required (VERSION 3.5)

project(API_Example)

add_executable(${PROJECT_NAME}
    main.cpp
)

target_link_libraries(
    ${PROJECT_NAME}
    API
)

install(TARGETS ${PROJECT_NAME}
    DESTINATION ${CMAKE_BINARY_DIR}/bin
)
