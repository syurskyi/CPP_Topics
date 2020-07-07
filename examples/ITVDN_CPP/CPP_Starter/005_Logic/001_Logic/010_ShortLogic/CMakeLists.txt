cmake_minimum_required(VERSION 3.5)

project(010_ShortLogic)

set(SOURCES
        010_ShortLogic.cpp)

add_executable(010_ShortLogic ${SOURCES})

set_target_properties(010_ShortLogic PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)