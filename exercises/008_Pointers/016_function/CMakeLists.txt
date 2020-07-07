cmake_minimum_required(VERSION 3.5)

project(016function)

set(SOURCES
        016function.cpp)

add_executable(016function ${SOURCES})

set_target_properties(016function PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)