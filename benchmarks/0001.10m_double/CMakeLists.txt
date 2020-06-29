set(current_dir 0001.10m_double)

set(CMAKE_FOLDER "${CMAKE_FOLDER}/0001.10m_double")

# add_subdirectory(charconv)
# add_subdirectory(fixed)
# add_subdirectory(fixed_precision)
# add_subdirectory(general)
# add_subdirectory(scientific)
# add_subdirectory(scientific_precision)
# add_subdirectory(unit)
# add_subdirectory(very_long)
# add_subdirectory(very_long_repeat)
# add_subdirectory(very_long_simple)
# add_subdirectory(with_crypto)

benchmark_target(0001 output_10M_double)
