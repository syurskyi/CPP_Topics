cmake_minimum_required(VERSION 3.5)
project(thread)

set(CMAKE_CXX_STANDARD 14)

find_package(Threads)

add_executable(thread thread.cpp)

set_target_properties(thread PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED OFF
        COMPILE_OPTIONS "-fsanitize=thread"
        LINK_OPTIONS "-fsanitize=thread"
        )

target_link_libraries(thread
  ${CMAKE_THREAD_LIBS_INIT}
  )

add_executable(static static.cpp)
add_executable(volatile volatile.cpp)
