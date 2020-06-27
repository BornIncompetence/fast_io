set(current_dir charconv)

set(CMAKE_FOLDER "${CMAKE_FOLDER}/${current_dir}")

benchmark_nested_target(0001.10m_double ${current_dir} charconv)
benchmark_nested_target(0001.10m_double ${current_dir} charconv_common)
benchmark_nested_target(0001.10m_double ${current_dir} iobuf_file)
