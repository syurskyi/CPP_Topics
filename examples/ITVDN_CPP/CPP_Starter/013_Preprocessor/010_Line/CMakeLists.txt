cmake_minimum_required(VERSION 3.5)

project(010_Line)

set(SOURCES
        010_Line.cpp)

add_executable(010_Line ${SOURCES})

set_target_properties(010_Line PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)