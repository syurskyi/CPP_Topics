cmake_minimum_required(VERSION 3.5)
project(pattern)

find_package(Threads)

add_executable(guarded_suspension guarded_suspension.cpp)
add_executable(move move.cpp)

set_target_properties(guarded_suspension move PROPERTIES
        CXX_STANDARD 17
        CXX_STANDARD_REQUIRED OFF
        COMPILE_OPTIONS "-Wpedantic;-Wall;-Wextra;-fsanitize=thread"
        LINK_OPTIONS "-fsanitize=thread"
        )

target_link_libraries(guarded_suspension
  ${CMAKE_THREAD_LIBS_INIT}
  )
