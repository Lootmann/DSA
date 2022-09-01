set(CMAKE_VERBOSE_MAKEFILE 1)
cmake_minimum_required(VERSION 3.12)

project(DATASTURCTURE_PROJECT CXX)

add_executable(a.out main.cpp)

target_compile_options(a.out
  PUBLIC
  -O2
  -Wall
  -Wextra
  -Wshadow
  -pedantic-errors
  )

add_subdirectory(src)

enable_testing()
add_subdirectory(test)

target_link_libraries(a.out Lib)
