set(CMAKE_FOLDER "${CMAKE_FOLDER}/size_t_random")

benchmark_target(0000.strings.size_t_random concat)
benchmark_target(0000.strings.size_t_random fmtformat_int)
benchmark_target(0000.strings.size_t_random ospan)
benchmark_target(0000.strings.size_t_random sm)
benchmark_target(0000.strings.size_t_random to)
benchmark_target(0000.strings.size_t_random to_string)
