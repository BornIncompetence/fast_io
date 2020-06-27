set(current_dir size_t_random)

set(CMAKE_FOLDER "${CMAKE_FOLDER}/${current_dir}")

benchmark_nested_nested_target(0000.10m_size_t strings ${current_dir} concat)
benchmark_nested_nested_target(0000.10m_size_t strings ${current_dir} fmtformat_int)
benchmark_nested_nested_target(0000.10m_size_t strings ${current_dir} ospan)
benchmark_nested_nested_target(0000.10m_size_t strings ${current_dir} sm)
benchmark_nested_nested_target(0000.10m_size_t strings ${current_dir} to)
benchmark_nested_nested_target(0000.10m_size_t strings ${current_dir} to_string)
