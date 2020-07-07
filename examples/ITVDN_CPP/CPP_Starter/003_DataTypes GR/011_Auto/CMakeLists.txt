cmake_minimum_required(VERSION 3.5)

project(011_Auto)

set(SOURCES
        011_Auto.cpp)

add_executable(011_Auto ${SOURCES})

set_target_properties(011_Auto PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)