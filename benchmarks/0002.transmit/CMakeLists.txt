set(current_dir 0002.transmit)

set(CMAKE_FOLDER "${CMAKE_FOLDER}/${current_dir}")

benchmark_target(${current_dir} generate_large_file)
benchmark_target(${current_dir} transmit)
