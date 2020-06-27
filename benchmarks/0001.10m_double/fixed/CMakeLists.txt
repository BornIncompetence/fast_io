set(current_dir fixed)

set(CMAKE_FOLDER "${CMAKE_FOLDER}/${current_dir}")

benchmark_nested_target(0001.10m_double ${current_dir} obuf)
benchmark_nested_target(0001.10m_double ${current_dir} parallel)
