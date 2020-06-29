cmake_minimum_required(VERSION 3.15)

# project(fast_io_testsuites)
set(CMAKE_FOLDER "testsuites")

if(CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
	if (CMAKE_CXX_COMPILER_VERSION VERSION_LESS 10)
		message(FATAL_ERROR "fast_io no longer supports GCC < 10 version because of incomplete C++ standard library support for concepts lite. Please build the master version of GCC from its official or mirror repo. Or use Visual Studio Preview")
	endif()
endif()

function(make_target TARGET_NAME SOURCE_NAME)
	add_executable(${TARGET_NAME} ${SOURCE_NAME})
	target_link_libraries(${TARGET_NAME} PRIVATE fast_io)

	# No std=gnu++2a or else it won't compile
	set_target_properties(${TARGET_NAME} PROPERTIES CXX_EXTENSIONS NO)

	target_compile_features(${TARGET_NAME} PRIVATE cxx_std_20)
	target_compile_options(${TARGET_NAME} PRIVATE
		$<$<AND:$<CONFIG:RELEASE>,$<CXX_COMPILER_ID:GNU>>: -s>
		$<$<CXX_COMPILER_ID:GNU>: -ffast-math -Wall -Wextra>
		$<$<CXX_COMPILER_ID:Clang>: -ffast-math -Xclang>
	)
endfunction(make_target)

function(test_target FOLDER_NUMBER SOURCE_NAME)
	make_target("${FOLDER_NUMBER}.${SOURCE_NAME}" "${SOURCE_NAME}.cc")
endfunction(test_target)

# TODO: FIX compilation errors
add_subdirectory(0000.transforms)
# add_subdirectory(0001.forbid_uflow)
# add_subdirectory(0002.crypto)
# add_subdirectory(0003.hash)
# add_subdirectory(0004.TOCTOU)
# add_subdirectory(0005.freestanding)
# add_subdirectory(0006.memory_map)
# add_subdirectory(0007.round_trip)
# add_subdirectory(0008.hack)
# add_subdirectory(0009.wchar)
# add_subdirectory(0010.string)
# add_subdirectory(0011.binary_size)
# add_subdirectory(0012.security)
# add_subdirectory(0013.internal_temporary_buffer)
# add_subdirectory(0014.width)
# add_subdirectory(0015.interpositioning)
# add_subdirectory(0016.floating)
# add_subdirectory(0017.integer)
# add_subdirectory(0018.utf8)
# add_subdirectory(0019.crtp)
