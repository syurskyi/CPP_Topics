cmake_minimum_required(VERSION 3.5)

project(009_Functions)

set(SOURCES
        009_Functions.cpp)

add_executable(009_Functions ${SOURCES})

set_target_properties(009_Functions PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)