cmake_minimum_required(VERSION 3.5)

project(006_Ternary)

set(SOURCES
        006_Ternary.cpp)

add_executable(006_Ternary ${SOURCES})

set_target_properties(006_Ternary PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)