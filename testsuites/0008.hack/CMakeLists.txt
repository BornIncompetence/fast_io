set(current_dir 0008.hack)

set(CMAKE_FOLDER "${CMAKE_FOLDER}/${current_dir}")

test_target(${current_dir} c_file_unlocked)
test_target(${current_dir} fd)
test_target(${current_dir} filebuf_io_observer)
test_target(${current_dir} obuf_file_demo)
test_target(${current_dir} wc_file_unlocked)
