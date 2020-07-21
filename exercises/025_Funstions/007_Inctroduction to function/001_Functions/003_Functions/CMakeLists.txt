cmake_minimum_required(VERSION 3.5)

project(003_Functions)

set(SOURCES
        003_Functions.cpp)

add_executable(003_Functions ${SOURCES})

set_target_properties(003_Functions PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)