set(current_dir global_stdout)

set(CMAKE_FOLDER "${CMAKE_FOLDER}/${current_dir}")

benchmark_nested_target(0014.raw_performance ${current_dir} fwrite)
benchmark_nested_target(0014.raw_performance ${current_dir} out)
benchmark_nested_target(0014.raw_performance ${current_dir} out_buf)
benchmark_nested_target(0014.raw_performance ${current_dir} out_unlocked)
