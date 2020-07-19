cmake_minimum_required(VERSION 3.5)

project(016_GoTo)

set(SOURCES
        016_GoTo.cpp)

add_executable(016_GoTo ${SOURCES})

set_target_properties(016_GoTo PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)