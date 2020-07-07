cmake_minimum_required(VERSION 3.5)

project(012_Auto)

set(SOURCES
        012_Auto.cpp)

add_executable(012_Auto ${SOURCES})

set_target_properties(012_Auto PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)