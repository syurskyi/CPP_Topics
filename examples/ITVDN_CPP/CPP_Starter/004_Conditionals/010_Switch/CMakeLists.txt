cmake_minimum_required(VERSION 3.5)

project(010_Switch)

set(SOURCES
        010_Switch.cpp)

add_executable(010_Switch ${SOURCES})

set_target_properties(010_Switch PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)