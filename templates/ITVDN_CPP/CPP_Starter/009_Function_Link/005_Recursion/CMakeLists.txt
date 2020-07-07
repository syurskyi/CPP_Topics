cmake_minimum_required(VERSION 3.5)

project(005Recursion)

set(SOURCES
        005Recursion.cpp)

add_executable(005Recursion ${SOURCES})

set_target_properties(005Recursion PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)