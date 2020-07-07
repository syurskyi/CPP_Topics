cmake_minimum_required(VERSION 3.5)

project(006_Functions)

set(SOURCES
        006_Functions.cpp)

add_executable(006_Functions ${SOURCES})

set_target_properties(006_Functions PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)