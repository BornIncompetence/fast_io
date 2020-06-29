set(CMAKE_FOLDER "${CMAKE_FOLDER}/uint32")

benchmark_target(0000.strings.uint32 concat)
benchmark_target(0000.strings.uint32 fmtformat_int)
benchmark_target(0000.strings.uint32 ospan)
benchmark_target(0000.strings.uint32 sm)
benchmark_target(0000.strings.uint32 to)
