cmake_minimum_required(VERSION 3.5)

project(020Array)

set(SOURCES
        020Array.cpp)

add_executable(020Array ${SOURCES})

set_target_properties(020Array PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)