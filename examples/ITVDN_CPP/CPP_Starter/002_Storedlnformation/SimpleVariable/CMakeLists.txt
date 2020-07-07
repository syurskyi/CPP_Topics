cmake_minimum_required(VERSION 3.5)

project(SimpleVariable)

set(SOURCES
        SimpleVariable.cpp)

add_executable(SimpleVariable ${SOURCES})

set_target_properties(SimpleVariable PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)