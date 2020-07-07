cmake_minimum_required(VERSION 3.5)

project(006Pointer)

set(SOURCES
        006Pointer.cpp)

add_executable(006Pointer ${SOURCES})

set_target_properties(006Pointer PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)