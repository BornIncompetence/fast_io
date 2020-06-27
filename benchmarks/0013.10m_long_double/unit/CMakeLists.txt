set(current_dir unit)

set(CMAKE_FOLDER "${CMAKE_FOLDER}/${current_dir}")

benchmark_nested_target(0013.10m_long_double ${current_dir} c_file_unlocked)
benchmark_nested_target(0013.10m_long_double ${current_dir} filebuf_io_observer)
benchmark_nested_target(0013.10m_long_double ${current_dir} fprintf)
benchmark_nested_target(0013.10m_long_double ${current_dir} fstream)
benchmark_nested_target(0013.10m_long_double ${current_dir} iobuf_file)
