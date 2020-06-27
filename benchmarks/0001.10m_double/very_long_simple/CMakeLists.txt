set(current_dir very_long_simple)

set(CMAKE_FOLDER "${CMAKE_FOLDER}/${current_dir}")

benchmark_nested_target(0001.10m_double ${current_dir} fscanf)
benchmark_nested_target(0001.10m_double ${current_dir} ibuf_file)
benchmark_nested_target(0001.10m_double ${current_dir} ifstream)
benchmark_nested_target(0001.10m_double ${current_dir} test)
benchmark_nested_target(0001.10m_double ${current_dir} very_long)
