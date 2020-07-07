cmake_minimum_required(VERSION 3.5)

project(003_For)

set(SOURCES
        003_For.cpp)

add_executable(003_For ${SOURCES})

set_target_properties(003_For PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)