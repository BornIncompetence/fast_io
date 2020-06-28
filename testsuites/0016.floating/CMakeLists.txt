set(current_dir 0016.floating)

set(CMAKE_FOLDER "${CMAKE_FOLDER}/${current_dir}")

test_target(${current_dir} data)
test_target(${current_dir} floating)
