cmake_minimum_required(VERSION 3.5)

project(008string)

set(SOURCES
        008string.cpp)

add_executable(008string ${SOURCES})

set_target_properties(008string PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)