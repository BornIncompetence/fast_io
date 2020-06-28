set(current_dir 0003.hash)

set(CMAKE_FOLDER "${CMAKE_FOLDER}/${current_dir}")

test_target(${current_dir} sha1)
