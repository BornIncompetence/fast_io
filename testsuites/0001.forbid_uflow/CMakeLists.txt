set(current_dir 0001.forbid_uflow)

set(CMAKE_FOLDER "${CMAKE_FOLDER}/${current_dir}")

test_target(${current_dir} fail)
test_target(${current_dir} nofail)
test_target(${current_dir} stdiowontfail)
