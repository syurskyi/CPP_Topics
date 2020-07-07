cmake_minimum_required(VERSION 3.5)

project(004_Initialaze)

set(SOURCES
        004_Initialaze.cpp)

add_executable(004_Initialaze ${SOURCES})

set_target_properties(004_Initialaze PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)