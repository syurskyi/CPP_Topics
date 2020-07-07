cmake_minimum_required(VERSION 3.5)

project(008_Array)

set(SOURCES
        008_Array.cpp)

add_executable(008_Array ${SOURCES})

set_target_properties(008_Array PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)