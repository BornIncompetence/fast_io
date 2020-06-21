cmake_minimum_required(VERSION 3.15)
project(fastio_examples)
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

fast_target(compile "./0000.compile/fast_io.cc")
fast_target(hw "./0001.helloworld/hw.cc")
fast_target(hw_u8 "./0001.helloworld/hw_u8.cc")
if (WIN32)
	fast_target(hello_world_win32_box "./0001.helloworld/hello_world_win32_box.cc")
	fast_target(utf8_file "./0022.utf/utf8_file.cc")
endif (WIN32)