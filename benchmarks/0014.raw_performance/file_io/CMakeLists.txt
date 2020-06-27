set(current_dir file_io)

set(CMAKE_FOLDER "${CMAKE_FOLDER}/${current_dir}")

benchmark_nested_target(0014.raw_performance ${current_dir} c_file)
benchmark_nested_target(0014.raw_performance ${current_dir} c_file_unlocked)
benchmark_nested_target(0014.raw_performance ${current_dir} filebuf_file)
benchmark_nested_target(0014.raw_performance ${current_dir} fstream)
benchmark_nested_target(0014.raw_performance ${current_dir} fwrite)
benchmark_nested_target(0014.raw_performance ${current_dir} obuf_file)
benchmark_nested_target(0014.raw_performance ${current_dir} obuf_file_mutex)
