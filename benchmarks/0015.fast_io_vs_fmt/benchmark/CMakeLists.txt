set(current_dir benchmark)

set(CMAKE_FOLDER "${CMAKE_FOLDER}/${current_dir}")

benchmark_nested_target(0015.fast_io_vs_fmt ${current_dir} concat)
benchmark_nested_target(0015.fast_io_vs_fmt ${current_dir} fmtformat_int)
benchmark_nested_target(0015.fast_io_vs_fmt ${current_dir} to)
