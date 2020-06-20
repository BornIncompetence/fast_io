cmake_minimum_required(VERSION 3.15)

project(fast_io)

add_subdirectory(examples)
# add_subdirectory(benchmarks)

# I'm not sure exactly if INTERFACE is correct, but it allows me to see the library targets for now
add_library(fast_io INTERFACE)
target_include_directories(fast_io INTERFACE "include")

if(CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
	set(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -s")
	set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -s")
elseif ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "Clang")
	set(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -s")
	set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -s")
endif()

INSTALL (DIRECTORY ${CMAKE_SOURCE_DIR}/include/ DESTINATION include)