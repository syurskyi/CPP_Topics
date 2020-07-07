cmake_minimum_required(VERSION 3.5)

project(008_Functions)

set(SOURCES
        008_Functions.cpp)

add_executable(008_Functions ${SOURCES})

set_target_properties(008_Functions PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)