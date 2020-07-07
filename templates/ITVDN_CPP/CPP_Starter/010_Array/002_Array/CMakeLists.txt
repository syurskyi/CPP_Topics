cmake_minimum_required(VERSION 3.5)

project(002Array)

set(SOURCES
        002Array.cpp)

add_executable(002Array ${SOURCES})

set_target_properties(002Array PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)