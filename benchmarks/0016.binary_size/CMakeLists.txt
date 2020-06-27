set(current_dir 0016.binary_size)

set(CMAKE_FOLDER "${CMAKE_FOLDER}/${current_dir}")

benchmark_target(${current_dir} boost_iostreams)
benchmark_target(${current_dir} fast_io)
