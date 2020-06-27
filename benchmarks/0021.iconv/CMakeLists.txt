set(current_dir 0021.iconv)

set(CMAKE_FOLDER "${CMAKE_FOLDER}/${current_dir}")

benchmark_target(${current_dir} fill_nc)
benchmark_target(${current_dir} universal)
