set(current_dir 0004.TOCTOU)

set(CMAKE_FOLDER "${CMAKE_FOLDER}/${current_dir}")

test_target(${current_dir} file_hw)
test_target(${current_dir} file_hw_follow)
