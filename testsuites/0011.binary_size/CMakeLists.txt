set(current_dir 0011.binary_size)

set(CMAKE_FOLDER "${CMAKE_FOLDER}/${current_dir}")

test_target(${current_dir} fast_io)
test_target(${current_dir} fmt)
