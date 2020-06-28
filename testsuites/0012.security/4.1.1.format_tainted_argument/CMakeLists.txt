set(current_dir 4.1.1.format_tainted_argument)

set(CMAKE_FOLDER "${CMAKE_FOLDER}/${current_dir}")

test_nested_target(0012.security ${current_dir} fast_io_sample)
