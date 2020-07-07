cmake_minimum_required(VERSION 3.5)

project(DefaultTypes)

set(SOURCES
        DefaultTypes)

add_executable(DefaultTypes ${SOURCES})

set_target_properties(DefaultTypes PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)