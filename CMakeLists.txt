cmake_minimum_required(VERSION 3.8)
project(HackerRank_C)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        intro/conditionals.cpp
        intro/data_types.cpp
        intro/hello_world.cpp
        intro/input_output.cpp)

add_executable(HackerRank_C ${SOURCE_FILES})