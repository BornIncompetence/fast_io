cmake_minimum_required(VERSION 3.15)

# project(fast_io_examples)
set(CMAKE_FOLDER "examples")

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

# example_target(0005 file_hw.cc)
# should produce
# example_target_0005_file_hw.cc)
function(example_target FOLDER_NUMBER SOURCE_NAME)
	set(this_target "example_${FOLDER_NUMBER}_${SOURCE_NAME}")
	add_executable(${this_target} "${SOURCE_NAME}.cc" ${ARGN})
	set_target_properties(${this_target} PROPERTIES CXX_EXTENSIONS NO)
	target_compile_features(${this_target} PRIVATE cxx_std_20)
	target_compile_options(${this_target} PRIVATE
		$<$<AND:$<CONFIG:RELEASE>,$<CXX_COMPILER_ID:GNU>>: -s>
		$<$<CXX_COMPILER_ID:GNU>: -ffast-math -Wall -Wextra>
		$<$<CXX_COMPILER_ID:Clang>: -ffast-math -Xclang>
	)
	target_link_libraries(${this_target} fast_io)
endfunction(example_target FOLDER_NUMBER SOURCE_NAME)

# fast_target(compile "./0000.compile/fast_io.cc")
# fast_target(hw "./0001.helloworld/hw.cc")
# fast_target(hw_u8 "./0001.helloworld/hw_u8.cc")
# if (WIN32)
# 	fast_target(hello_world_win32_box "./0001.helloworld/hello_world_win32_box.cc")
# 	fast_target(utf8_file "./0022.utf/utf8_file.cc")
# endif (WIN32)
add_subdirectory(0000.compile)
add_subdirectory(0001.helloworld)
add_subdirectory(0002.a+b)
add_subdirectory(0003.floating_point)
add_subdirectory(0004.string)
add_subdirectory(0005.file_io)
# add_subdirectory(0006.datetime)
# add_subdirectory(0007.legacy)
# add_subdirectory(0008.dns)
# add_subdirectory(0009.transmit)
# add_subdirectory(0010.http)
# add_subdirectory(0011.black_hole)
# add_subdirectory(0012.debug)
# add_subdirectory(0013.tcp)
# add_subdirectory(0014.epoll)
