cmake_minimum_required(VERSION 3.5)

project(002_LocalVariable)

set(SOURCES
        002_LocalVariable.cpp)

add_executable(002_LocalVariable ${SOURCES})

set_target_properties(002_LocalVariable PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)