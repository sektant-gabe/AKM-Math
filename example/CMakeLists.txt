cmake_minimum_required (VERSION 3.5)

project(akmMath_Example)

add_executable(${PROJECT_NAME}
    main.cpp
    # Vector3Example.cpp
)

target_link_libraries(
    ${PROJECT_NAME}
    akmMath
)

install(TARGETS ${PROJECT_NAME}
    DESTINATION ${CMAKE_BINARY_DIR}/bin
)
