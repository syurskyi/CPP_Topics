cmake_minimum_required(VERSION 3.5)

project(003_Const)

set(SOURCES
        003_Const.cpp)

add_executable(003_Const ${SOURCES})

set_target_properties(003_Const PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)