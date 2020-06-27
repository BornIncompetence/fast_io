set(current_dir 0008.width)

set(CMAKE_FOLDER "${CMAKE_FOLDER}/${current_dir}")

benchmark_target(${current_dir} c_file)
benchmark_target(${current_dir} c_file_unlocked)
benchmark_target(${current_dir} filebuf_io_observer)
benchmark_target(${current_dir} fprintf)
benchmark_target(${current_dir} obuf_file)
