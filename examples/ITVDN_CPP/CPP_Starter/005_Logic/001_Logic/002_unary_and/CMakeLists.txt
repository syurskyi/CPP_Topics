cmake_minimum_required(VERSION 3.5)

project(002_unary_and)

set(SOURCES
        002_unary_and.cpp)

add_executable(002_unary_and ${SOURCES})

set_target_properties(002_unary_and PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)