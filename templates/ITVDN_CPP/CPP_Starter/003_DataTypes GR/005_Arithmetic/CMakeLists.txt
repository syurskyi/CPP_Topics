cmake_minimum_required(VERSION 3.5)

project(005_Arithmetic)

set(SOURCES
        005_Arithmetic.cpp)

add_executable(005_Arithmetic ${SOURCES})

set_target_properties(005_Arithmetic PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)