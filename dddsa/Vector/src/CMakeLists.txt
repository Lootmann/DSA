cmake_minimum_required(VERSION 3.12)

add_library(Lib
  STATIC
  ./point.cpp
  )

target_include_directories(Lib
  PUBLIC ${PROJECT_SOURCE_DIR}/include
  )
