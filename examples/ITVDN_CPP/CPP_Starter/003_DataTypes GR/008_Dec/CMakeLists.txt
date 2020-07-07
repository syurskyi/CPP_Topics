cmake_minimum_required(VERSION 3.5)

project(008_Dec)

set(SOURCES
        008_Dec.cpp)

add_executable(008_Dec ${SOURCES})

set_target_properties(008_Dec PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)