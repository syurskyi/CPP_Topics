cmake_minimum_required(VERSION 3.5)

project(002Pointer)

set(SOURCES
        002Pointer.cpp)

add_executable(002Pointer ${SOURCES})

set_target_properties(002Pointer PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)