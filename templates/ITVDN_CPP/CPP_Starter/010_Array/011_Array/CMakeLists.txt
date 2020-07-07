cmake_minimum_required(VERSION 3.5)

project(011Array)

set(SOURCES
        011Array.cpp)

add_executable(011Array ${SOURCES})

set_target_properties(011Array PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)