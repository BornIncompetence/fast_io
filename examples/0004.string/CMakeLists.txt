set(current_dir 0004.string)

set(CMAKE_FOLDER "${CMAKE_FOLDER}/${current_dir}")

example_target(${current_dir} concat)
example_target(${current_dir} hello_kate)
example_target(${current_dir} hello_kate_concat)
example_target(${current_dir} hello_kate_concat_more)