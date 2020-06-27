set(current_dir 0006.exception_vs_syscall)

set(CMAKE_FOLDER "${CMAKE_FOLDER}/${current_dir}")

benchmark_target(${current_dir} exception)
benchmark_target(${current_dir} syscall)
