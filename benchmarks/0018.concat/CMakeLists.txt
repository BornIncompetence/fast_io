set(current_dir 0018.concat)

set(CMAKE_FOLDER "${CMAKE_FOLDER}/${current_dir}")

benchmark_target(${current_dir} add)
benchmark_target(${current_dir} concat)
