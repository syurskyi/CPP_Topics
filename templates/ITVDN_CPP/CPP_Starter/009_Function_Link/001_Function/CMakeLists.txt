cmake_minimum_required(VERSION 3.5)

project(001Function)

set(SOURCES
        001Function.cpp)

add_executable(001Function ${SOURCES})

set_target_properties(001Function PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)