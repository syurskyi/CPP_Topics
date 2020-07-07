cmake_minimum_required(VERSION 3.5)

project(002Function)

set(SOURCES
        002Function.cpp)

add_executable(002Function ${SOURCES})

set_target_properties(002Function PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)