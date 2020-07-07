cmake_minimum_required(VERSION 3.5)

project(010_Functions)

set(SOURCES
        010_Functions.cpp)

add_executable(010_Functions ${SOURCES})

set_target_properties(010_Functions PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)