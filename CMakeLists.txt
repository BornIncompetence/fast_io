cmake_minimum_required(VERSION 3.15)

project(fast_io CXX)

add_subdirectory(examples)
add_subdirectory(benchmarks)
add_subdirectory(testsuites)

# I'm not sure exactly if INTERFACE is correct, but it allows me to see the library targets for now
add_library(fast_io INTERFACE)
target_include_directories(fast_io INTERFACE "include")

INSTALL (DIRECTORY ${CMAKE_SOURCE_DIR}/include/ DESTINATION include)