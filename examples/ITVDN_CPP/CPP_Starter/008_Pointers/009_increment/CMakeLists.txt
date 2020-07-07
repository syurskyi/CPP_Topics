cmake_minimum_required(VERSION 3.5)

project(009increment)

set(SOURCES
        009increment.cpp)

add_executable(009increment ${SOURCES})

set_target_properties(009increment PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)