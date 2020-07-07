cmake_minimum_required(VERSION 3.5)

project(008Link)

set(SOURCES
        008Link.cpp)

add_executable(008Link ${SOURCES})

set_target_properties(008Link PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)