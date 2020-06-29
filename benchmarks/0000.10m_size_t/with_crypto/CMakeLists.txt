set(CMAKE_FOLDER "${CMAKE_FOLDER}/with_crypto")

# benchmark_target(0000.with_crypto 1B_size_t)
if(CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
	benchmark_target(0000.with_crypto tenm_size_t)
endif()
