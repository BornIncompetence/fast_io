set(current_dir raw)

set(CMAKE_FOLDER "${CMAKE_FOLDER}/${current_dir}")

benchmark_nested_target(0000.10m_size_t ${current_dir} charconv_vs_ospan)
