cmake_minimum_required(VERSION 3.5)

project(SimpleVariable)

set(SOURCES
        002_SimpleVariable.cpp)

add_executable(002_SimpleVariable ${SOURCES})

set_target_properties(002_SimpleVariable PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)