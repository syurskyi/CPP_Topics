cmake_minimum_required(VERSION 3.5)

project(006Recursion)

set(SOURCES
        006Recursion.cpp)

add_executable(006Recursion ${SOURCES})

set_target_properties(006Recursion PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)