cmake_minimum_required(VERSION 3.5)

project(005Pointer)

set(SOURCES
        005Pointer.cpp)

add_executable(005Pointer ${SOURCES})

set_target_properties(005Pointer PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)