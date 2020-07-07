cmake_minimum_required(VERSION 3.5)

project(002_Functions)

set(SOURCES
        002_Functions.cpp)

add_executable(002_Functions ${SOURCES})

set_target_properties(002_Functions PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)