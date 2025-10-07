cmake_minimum_required (VERSION 3.5)

project(akmMath_Test)

add_executable(${PROJECT_NAME}
  main.cpp
  Vector3Test.cpp
  Matrix33Test.cpp
  #...
  )

target_link_libraries(
  ${PROJECT_NAME}
  akmMath
)

install(TARGETS ${PROJECT_NAME}
  DESTINATION ${CMAKE_BINARY_DIR}/bin
)
