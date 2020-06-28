set(current_dir 4.3.0.buffer_and_memory_vulnerabilities)

set(CMAKE_FOLDER "${CMAKE_FOLDER}/${current_dir}")

test_nested_target(0012.security ${current_dir} fast_io_sample)
