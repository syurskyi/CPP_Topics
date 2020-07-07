cmake_minimum_required(VERSION 3.5)

project(003_If_else)

set(SOURCES
        003_If_else.cpp)

add_executable(003_If_else ${SOURCES})

set_target_properties(003_If_else PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)