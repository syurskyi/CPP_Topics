cmake_minimum_required(VERSION 3.5)

project(003_Define)

set(SOURCES
        003_Define.cpp)

add_executable(003_Define ${SOURCES})

set_target_properties(003_Define PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)