set(current_dir binary_size)

set(CMAKE_FOLDER "${CMAKE_FOLDER}/${current_dir}")

benchmark_nested_target(0015.fast_io_vs_fmt ${current_dir} fast_io_concat)
benchmark_nested_target(0015.fast_io_vs_fmt ${current_dir} fmt)
