cmake_minimum_required(VERSION 3.5)

project(009_Switch)

set(SOURCES
        009_Switch.cpp)

add_executable(009_Switch ${SOURCES})

set_target_properties(009_Switch PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)