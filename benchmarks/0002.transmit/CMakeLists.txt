set(current_dir 0002.transmit)

set(CMAKE_FOLDER "${CMAKE_FOLDER}/${current_dir}")

example_target(${current_dir} generate_large_file)
example_target(${current_dir} transmit)
