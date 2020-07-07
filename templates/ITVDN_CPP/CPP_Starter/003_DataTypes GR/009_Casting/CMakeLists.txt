cmake_minimum_required(VERSION 3.5)

project(009_Casting)

set(SOURCES
        009_Casting.cpp)

add_executable(009_Casting ${SOURCES})

set_target_properties(009_Casting PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)