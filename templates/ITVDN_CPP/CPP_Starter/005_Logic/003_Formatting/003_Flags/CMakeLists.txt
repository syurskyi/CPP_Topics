cmake_minimum_required(VERSION 3.5)

project(003_Flags)

set(SOURCES
        003_Flags.cpp)

add_executable(003_Flags ${SOURCES})

set_target_properties(003_Flags PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)