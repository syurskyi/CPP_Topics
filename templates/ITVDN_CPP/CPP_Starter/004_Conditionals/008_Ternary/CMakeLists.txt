
cmake_minimum_required(VERSION 3.5)

project(008_Ternary)

set(SOURCES
        008_Ternary.cpp)

add_executable(008_Ternary ${SOURCES})

set_target_properties(008_Ternary PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)