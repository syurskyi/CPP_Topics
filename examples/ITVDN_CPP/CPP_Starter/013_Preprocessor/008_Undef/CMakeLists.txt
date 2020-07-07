cmake_minimum_required(VERSION 3.5)

project(008Undef)

set(SOURCES
        008Undef.cpp)

add_executable(008Undef ${SOURCES})

set_target_properties(008Undef PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)