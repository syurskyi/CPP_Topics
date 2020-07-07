cmake_minimum_required(VERSION 3.5)

project(009_Line)

set(SOURCES
        009_Line.cpp)

add_executable(009_Line ${SOURCES})

set_target_properties(009_Line PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)