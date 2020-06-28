set(current_dir 4.3.3.memory_unbounded_input)

set(CMAKE_FOLDER "${CMAKE_FOLDER}/${current_dir}")

test_nested_target(0012.security ${current_dir} fast_io_sample)
