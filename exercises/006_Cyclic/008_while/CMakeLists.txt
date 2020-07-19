cmake_minimum_required(VERSION 3.5)

project(008_while)

set(SOURCES
        008_while.cpp)

add_executable(008_while ${SOURCES})

set_target_properties(008_while PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)