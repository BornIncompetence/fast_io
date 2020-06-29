set(CMAKE_FOLDER "${CMAKE_FOLDER}/global_stdout")

benchmark_target(0014.global_stdout fwrite)
benchmark_target(0014.global_stdout out)
benchmark_target(0014.global_stdout out_buf)
benchmark_target(0014.global_stdout out_unlocked)
