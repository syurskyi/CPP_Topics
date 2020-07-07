cmake_minimum_required(VERSION 3.5)

project(007_Shift)

set(SOURCES
        007_Shift.cpp)

add_executable(007_Shift ${SOURCES})

set_target_properties(007_Shift PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)