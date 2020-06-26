cmake_minimum_required(VERSION 3.15)

# project(fast_io_benchmarks)
set(CMAKE_FOLDER "benchmarks")

find_package(Threceive)
find_package(fmt)

if(CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
	if (CMAKE_CXX_COMPILER_VERSION VERSION_LESS 10)
		message(FATAL_ERROR "fast_io no longer supports GCC < 10 version because of incomplete C++ standard library support for concepts lite. Please build the master version of GCC from its official or mirror repo. Or use Visual Studio Preview")
	endif()
endif()

function(fast_target FAST_NAME FAST_PATH)
	add_executable(${FAST_NAME} ${FAST_PATH} ${ARGN})
	target_link_libraries(${FAST_NAME} PRIVATE fast_io)
	
	# No std=gnu++2a or else it won't compile
	set_target_properties(${FAST_NAME} PROPERTIES CXX_EXTENSIONS NO)
	
	# Check if fmt exists on your system
	if(fmt_FOUND)
		target_compile_definitions(${FAST_NAME} PUBLIC FAST_IO_TEST_FMT)
		target_link_libraries(${FAST_NAME} PRIVATE fmt::fmt)
	endif()

	# Set C++ standard and compiler flags per target
	target_compile_features(${FAST_NAME} PRIVATE cxx_std_20)
	target_compile_options(${FAST_NAME} PRIVATE
		$<$<AND:$<CONFIG:RELEASE>,$<CXX_COMPILER_ID:GNU>>: -s>
		$<$<CXX_COMPILER_ID:GNU>: -ffast-math -maes -msse2 -msha -Wall -Wextra>
		$<$<CXX_COMPILER_ID:Clang>: -ffast-math -maes -msse2 -msha -Xclang>
	)
endfunction(fast_target)

fast_target(output_10M_size_t "./0000.10m_size_t/legacy/output_10M_size_t.cc")
if(CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
	fast_target(tenm_size_t "./0000.10m_size_t/with_crypto/tenm_size_t.cc")
endif()
fast_target(output_10M_double "./0001.10m_double/output_10M_double.cc")
