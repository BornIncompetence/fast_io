set(current_dir 0009.wchar)

set(CMAKE_FOLDER "${CMAKE_FOLDER}/${current_dir}")

test_target(${current_dir} c_file)
test_target(${current_dir} number)
test_target(${current_dir} wc_file_unlocked)
test_target(${current_dir} wiobuf_file)
