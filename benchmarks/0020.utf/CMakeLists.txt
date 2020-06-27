set(current_dir 0020.utf)

set(CMAKE_FOLDER "${CMAKE_FOLDER}/${current_dir}")

benchmark_target(${current_dir} fill_nc)
benchmark_target(${current_dir} fill_ns)
