cmake_minimum_required(VERSION 3.5)

project(009_ShortLogic)

set(SOURCES
        009_ShortLogic.cpp)

add_executable(009_ShortLogic ${SOURCES})

set_target_properties(009_ShortLogic PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)