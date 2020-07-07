cmake_minimum_required(VERSION 3.5)

project(008_If_else)

set(SOURCES
        008_If_else.cpp)

add_executable(008_If_else ${SOURCES})

set_target_properties(008_If_else PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)