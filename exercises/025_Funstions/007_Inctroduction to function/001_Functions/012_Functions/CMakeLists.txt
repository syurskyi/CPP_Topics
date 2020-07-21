cmake_minimum_required(VERSION 3.5)

project(012_Functions)

set(SOURCES
        012_Functions.cpp)

add_executable(012_Functions ${SOURCES})

set_target_properties(012_Functions PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)