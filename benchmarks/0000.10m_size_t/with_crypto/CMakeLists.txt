set(current_dir with_crypto)

set(CMAKE_FOLDER "${CMAKE_FOLDER}/${current_dir}")

benchmark_nested_target(0000.10m_size_t ${current_dir} 1B_size_t)
benchmark_nested_target(0000.10m_size_t ${current_dir} tenm_size_t)
