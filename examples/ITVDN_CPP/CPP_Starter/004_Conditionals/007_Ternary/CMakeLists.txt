cmake_minimum_required(VERSION 3.5)

project(007_Ternary)

set(SOURCES
        007_Ternary.cpp)

add_executable(007_Ternary ${SOURCES})

set_target_properties(007_Ternary PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)