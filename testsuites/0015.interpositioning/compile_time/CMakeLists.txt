set(current_dir compile_time)

set(CMAKE_FOLDER "${CMAKE_FOLDER}/${current_dir}")

test_nested_target(0015.interpositioning ${current_dir} example)
