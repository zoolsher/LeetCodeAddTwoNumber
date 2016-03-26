cmake_minimum_required(VERSION 3.3)
project(AddTwoNumber)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -stdlib=libc++")

set(SOURCE_FILES main.cpp Solution.cpp Solution.h)
add_executable(AddTwoNumber ${SOURCE_FILES})