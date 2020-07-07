cmake_minimum_required(VERSION 3.5)

project(001_Pointer)

set(SOURCES
        001_Pointer.cpp)

add_executable(001_Pointer ${SOURCES})

set_target_properties(001_Pointer PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)