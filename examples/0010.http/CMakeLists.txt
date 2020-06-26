set(current_dir 0009.transmit)

set(CMAKE_FOLDER "${CMAKE_FOLDER}/${current_dir}")

example_target(${current_dir} http_test_zero_copy)
example_target(${current_dir} transmit)
example_target(${current_dir} transmit_bytes)
example_target(${current_dir} transmit_to_c_stdout)
example_target(${current_dir} transmit_use_manip)