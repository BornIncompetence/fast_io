set(current_dir 0001.helloworld)

set(CMAKE_FOLDER "${CMAKE_FOLDER}/${current_dir}")

example_target(${current_dir} four)
example_target(${current_dir} hello_world_win32_box)
example_target(${current_dir} hw)
example_target(${current_dir} hw_long)
example_target(${current_dir} hw_u8)
