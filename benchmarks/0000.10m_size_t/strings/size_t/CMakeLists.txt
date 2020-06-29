set(CMAKE_FOLDER "${CMAKE_FOLDER}/size_t")

benchmark_target(0000.strings.size_t concat)
benchmark_target(0000.strings.size_t fmtformat_int)
benchmark_target(0000.strings.size_t ospan)
benchmark_target(0000.strings.size_t sm)
benchmark_target(0000.strings.size_t to)
