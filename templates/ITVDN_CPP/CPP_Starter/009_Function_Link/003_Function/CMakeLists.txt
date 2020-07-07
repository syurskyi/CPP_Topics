cmake_minimum_required(VERSION 3.5)

project(003Function)

set(SOURCES
        003Function.cpp)

add_executable(003Function ${SOURCES})

set_target_properties(003Function PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)