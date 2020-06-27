set(current_dir 0010.http)

set(CMAKE_FOLDER "${CMAKE_FOLDER}/${current_dir}")

example_target(${current_dir} http)
example_target(${current_dir} http_header_test)
example_target(${current_dir} http_test_zero_copy)
