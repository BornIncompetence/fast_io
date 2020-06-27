set(current_dir with_crypto)

set(CMAKE_FOLDER "${CMAKE_FOLDER}/${current_dir}")

benchmark_nested_target(0001.10m_double ${current_dir} no_teststd_output_10M_double)
