cmake_minimum_required(VERSION 3.9)
project(lockfree)

find_package(Boost REQUIRED)

include_directories(${Boost_INCLUDE_DIR})

set(CMAKE_CXX_STANDARD 14)

add_executable(blf blf.cpp)

add_executable(lf lf.cpp)
