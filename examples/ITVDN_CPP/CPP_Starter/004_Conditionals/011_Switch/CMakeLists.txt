cmake_minimum_required(VERSION 3.5)

project(011_Switch)

set(SOURCES
        011_Switch.cpp)

add_executable(011_Switch ${SOURCES})

set_target_properties(011_Switch PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)