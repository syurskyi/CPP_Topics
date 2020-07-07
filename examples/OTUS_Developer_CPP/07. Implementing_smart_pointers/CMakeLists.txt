cmake_minimum_required(VERSION 3.15)
project(smart_ptr)

set(CMAKE_CXX_STANDARD 17)

add_executable(unique_ptr unique_ptr.cpp)
add_executable(shared_ptr shared_ptr.cpp)
add_executable(weak_ptr weak_ptr.cpp)
add_executable(enable_shared_from_this enable_shared_from_this.cpp)
add_executable(ebo ebo.cpp)
