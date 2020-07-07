cmake_minimum_required(VERSION 3.5)

project(001_Function)

set(SOURCES
        001_Function.cpp)

add_executable(001_Function ${SOURCES})

set_target_properties(001_Function PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)