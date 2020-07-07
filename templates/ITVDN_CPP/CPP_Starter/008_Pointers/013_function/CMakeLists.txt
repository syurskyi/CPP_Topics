cmake_minimum_required(VERSION 3.5)

project(013function)

set(SOURCES
        013function.cpp)

add_executable(013function ${SOURCES})

set_target_properties(013function PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)