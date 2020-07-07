cmake_minimum_required(VERSION 3.5)

project(003_Char)

set(SOURCES
        003_Char.cpp)

add_executable(003_Char ${SOURCES})

set_target_properties(003_Char PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)