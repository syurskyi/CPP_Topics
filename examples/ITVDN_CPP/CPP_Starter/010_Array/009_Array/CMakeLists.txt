cmake_minimum_required(VERSION 3.5)

project(009Array)

set(SOURCES
        009Array.cpp)

add_executable(009Array ${SOURCES})

set_target_properties(009Array PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)