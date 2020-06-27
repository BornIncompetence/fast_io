set(current_dir charconv)

set(CMAKE_FOLDER "${CMAKE_FOLDER}/${current_dir}")

benchmark_nested_target(0011.10m_float ${current_dir} charconv)
benchmark_nested_target(0011.10m_float ${current_dir} iobuf_file)
