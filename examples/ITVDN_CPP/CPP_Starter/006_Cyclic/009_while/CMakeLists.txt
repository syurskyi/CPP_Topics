cmake_minimum_required(VERSION 3.5)

project(009_while)

set(SOURCES
        009_while.cpp)

add_executable(009_while ${SOURCES})

set_target_properties(009_while PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)