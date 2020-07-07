cmake_minimum_required(VERSION 3.5)

project(002_if)

set(SOURCES
        002_if.cpp)

add_executable(002_if ${SOURCES})

set_target_properties(002_if PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)