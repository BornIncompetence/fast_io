set(current_dir random)

set(CMAKE_FOLDER "${CMAKE_FOLDER}/${current_dir}")

benchmark_nested_target(0000.10m_size_t ${current_dir} iobuf_file)
benchmark_nested_target(0000.10m_size_t ${current_dir} parallel)
