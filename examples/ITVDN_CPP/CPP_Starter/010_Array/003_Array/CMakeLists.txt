cmake_minimum_required(VERSION 3.5)

project(003Array)

set(SOURCES
        003Array.cpp)

add_executable(003Array ${SOURCES})

set_target_properties(003Array PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)