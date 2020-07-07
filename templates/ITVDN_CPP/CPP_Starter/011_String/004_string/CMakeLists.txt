cmake_minimum_required(VERSION 3.5)

project(004string)

set(SOURCES
        004string.cpp)

add_executable(004string ${SOURCES})

set_target_properties(004string PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)