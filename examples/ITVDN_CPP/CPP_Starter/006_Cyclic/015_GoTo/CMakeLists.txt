cmake_minimum_required(VERSION 3.5)

project(015_GoTo)

set(SOURCES
        015_GoTo.cpp)

add_executable(015_GoTo ${SOURCES})

set_target_properties(015_GoTo PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)