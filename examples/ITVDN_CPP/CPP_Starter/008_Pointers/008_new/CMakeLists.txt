cmake_minimum_required(VERSION 3.5)

project(008new)

set(SOURCES
        008new.cpp)

add_executable(008new ${SOURCES})

set_target_properties(008new PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)