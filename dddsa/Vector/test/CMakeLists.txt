cmake_minimum_required(VERSION 3.12)

find_package(GTest REQUIRED)
include(GoogleTest)

add_executable(test_out
  ./test_point.cpp
  )

target_link_libraries(
  test_out
  Lib
  GTest::GTest
  GTest::Main
  )

include_directories(Lib
  PUBLIC
  ${PROJECT_SOURCE_DIR}/include
  ${PROJECT_SOURCE_DIR}/src
  ${GTEST_INCLUDE_DIRS}
  )

gtest_discover_tests(test_out)


