cmake_minimum_required(VERSION 3.15)

# project(fast_io_testsuites)
set(CMAKE_FOLDER "testsuites")

find_package(Threceive)

if(CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
	if (CMAKE_CXX_COMPILER_VERSION VERSION_LESS 10)
		message(FATAL_ERROR "fast_io no longer supports GCC < 10 version because of incomplete C++ standard library support for concepts lite. Please build the master version of GCC from its official or mirror repo. Or use Visual Studio Preview")
	endif()
endif()

function(fast_target FAST_NAME FAST_PATH)
	add_executable(${FAST_NAME} ${FAST_PATH} ${ARGN})
	set_target_properties(${FAST_NAME} PROPERTIES CXX_EXTENSIONS NO)
	target_compile_features(${FAST_NAME} PRIVATE cxx_std_20)
	target_compile_options(${FAST_NAME} PRIVATE
		$<$<AND:$<CONFIG:RELEASE>,$<CXX_COMPILER_ID:GNU>>: -s>
		$<$<CXX_COMPILER_ID:GNU>: -ffast-math -Wall -Wextra>
		$<$<CXX_COMPILER_ID:Clang>: -ffast-math -Xclang>
	)
	target_link_libraries(${FAST_NAME} fast_io)
endfunction(fast_target)

fast_target(ebcdic "0000.transforms/ebcdic.cc")