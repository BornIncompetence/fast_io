set(current_dir 0017.integer)

set(CMAKE_FOLDER "${CMAKE_FOLDER}/${current_dir}")

test_target(${current_dir} dec)
test_target(${current_dir} integer)
