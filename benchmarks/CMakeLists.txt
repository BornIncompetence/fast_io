cmake_minimum_required(VERSION 3.15)

# project(fast_io_benchmarks)
set(CMAKE_FOLDER "benchmarks")

find_package(fmt)

if(CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
	if (CMAKE_CXX_COMPILER_VERSION VERSION_LESS 10)
		message(FATAL_ERROR "fast_io no longer supports GCC < 10 version because of incomplete C++ standard library support for concepts lite. Please build the master version of GCC from its official or mirror repo. Or use Visual Studio Preview")
	endif()
endif()

function(make_target TARGET_NAME SOURCE_DIR)
	add_executable(${TARGET_NAME} ${SOURCE_NAME} ${ARGN})
	target_link_libraries(${TARGET_NAME} PRIVATE fast_io)
	
	# No std=gnu++2a or else it won't compile
	set_target_properties(${TARGET_NAME} PROPERTIES CXX_EXTENSIONS NO)
	
	# Check if fmt exists on your system
	if(fmt_FOUND)
		target_compile_definitions(${TARGET_NAME} PUBLIC FAST_IO_TEST_FMT)
		target_link_libraries(${TARGET_NAME} PRIVATE fmt::fmt)
	endif()

	# Set C++ standard and compiler flags per target
	target_compile_features(${TARGET_NAME} PRIVATE cxx_std_20)
	target_compile_options(${TARGET_NAME} PRIVATE
		$<$<AND:$<CONFIG:RELEASE>,$<CXX_COMPILER_ID:GNU>>: -s>
		$<$<CXX_COMPILER_ID:GNU>: -ffast-math -maes -msse2 -msha -Wall -Wextra>
		$<$<CXX_COMPILER_ID:Clang>: -ffast-math -maes -msse2 -msha -Xclang>
	)
endfunction(make_target)

function(benchmark_target FOLDER_NUMBER SOURCE_NAME)
	set(this_target "benchmark_${FOLDER_NUMBER}_${SOURCE_NAME}")
	make_target(${this_target} "${SOURCE_NAME}.cc" ${ARGN})
endfunction(benchmark_target)

function(benchmark_nested_target FOLDER_NUMBER INNER_FOLDER SOURCE_NAME)
	set(this_target "benchmark_${FOLDER_NUMBER}_${INNER_FOLDER}_${SOURCE_NAME}")
	make_target(${this_target} "${INNER_FOLDER}/${SOURCE_NAME}.cc" ${ARGN})
endfunction(benchmark_nested_target)

function(benchmark_nested_nested_target FOLDER_NUMBER INNER_FOLDER_1 INNER_FOLDER_2 SOURCE_NAME)
	set(this_target "benchmark_${FOLDER_NUMBER}_${INNER_FOLDER_1}_${INNER_FOLDER_2}_${SOURCE_NAME}")
	make_target(${this_target} "${INNER_FOLDER_1}/${INNER_FOLDER_2}/${SOURCE_NAME}.cc" ${ARGN})
endfunction(benchmark_nested_nested_target)

# fast_target(output_10M_size_t "./0000.10m_size_t/legacy/output_10M_size_t.cc")
# if(CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
# 	fast_target(tenm_size_t "./0000.10m_size_t/with_crypto/tenm_size_t.cc")
# endif()
# fast_target(output_10M_double "./0001.10m_double/output_10M_double.cc")

# TODO: FIX compilation errors
# add_subdirectory(0000.10m_size_t)
# add_subdirectory(0001.10m_double)
# add_subdirectory(0002.transmit)
# add_subdirectory(0003.async_tcp_echo_server)
# add_subdirectory(0004.benchmark_provides_by_other_people)
# add_subdirectory(0005.standardlibrary_bench)
# add_subdirectory(0006.exception_vs_syscall)
# add_subdirectory(0007.isspace)
# add_subdirectory(0008.width)
# add_subdirectory(0009.fill_nc)
# add_subdirectory(0010.floating_details)
# add_subdirectory(0011.10m_float)
# add_subdirectory("0012.10m_(u)int128_t")
# add_subdirectory(0013.10m_long_double)
# add_subdirectory(0014.raw_performance)
# add_subdirectory(0015.fast_io_vs_fmt)
# add_subdirectory(0016.binary_size)
# add_subdirectory(0017.information_message)
# add_subdirectory(0018.concat)
# add_subdirectory(0019.text)
# add_subdirectory(0020.utf)
# add_subdirectory(0021.iconv)
