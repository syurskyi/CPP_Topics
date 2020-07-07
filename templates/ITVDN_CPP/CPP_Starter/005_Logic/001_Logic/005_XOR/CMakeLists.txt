cmake_minimum_required(VERSION 3.5)

project(005_XOR)

set(SOURCES
        005_XOR.cpp)

add_executable(005_XOR ${SOURCES})

set_target_properties(005_XOR PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)