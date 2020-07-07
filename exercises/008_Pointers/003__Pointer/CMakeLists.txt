cmake_minimum_required(VERSION 3.5)

project(003Pointer)

set(SOURCES
        003Pointer.cpp)

add_executable(003Pointer ${SOURCES})

set_target_properties(003Pointer PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)