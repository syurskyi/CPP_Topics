cmake_minimum_required(VERSION 3.5)

project(002_Example)

set(SOURCES
        002_Example.cpp)

add_executable(002_Example ${SOURCES})

set_target_properties(002_Example PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)