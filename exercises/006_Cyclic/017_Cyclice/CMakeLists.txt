cmake_minimum_required(VERSION 3.5)

project(017_Cyclice)

set(SOURCES
        017_Cyclice.cpp)

add_executable(017_Cyclice ${SOURCES})

set_target_properties(017_Cyclice PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)