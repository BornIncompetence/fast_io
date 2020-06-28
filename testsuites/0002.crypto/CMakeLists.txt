set(current_dir 0002.crypto)

set(CMAKE_FOLDER "${CMAKE_FOLDER}/${current_dir}")

test_target(${current_dir} cbc)
test_target(${current_dir} ctr)
test_target(${current_dir} ecb)
