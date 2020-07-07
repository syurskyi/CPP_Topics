cmake_minimum_required(VERSION 3.5)

project(cpp14_1)

add_executable(auto auto.cpp)
add_executable(lambda lambda.cpp)
add_executable(tuple tuple.cpp)

set_target_properties(auto lambda tuple PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON
        COMPILE_OPTIONS "-Wpedantic;-Wall;-Wextra"
        )
