cmake_minimum_required(VERSION 3.5)

project(014function)

set(SOURCES
        014function.cpp)

add_executable(014function ${SOURCES})

set_target_properties(014function PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)