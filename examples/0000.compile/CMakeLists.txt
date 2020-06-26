set(current_dir 0000.compile)

set(CMAKE_FOLDER "${CMAKE_FOLDER}/${current_dir}")

example_target(${current_dir} fast_io)
example_target(${current_dir} fast_io_device)
example_target(${current_dir} fast_io_legacy)
example_target(${current_dir} fast_io_network)