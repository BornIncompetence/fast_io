set(CMAKE_FOLDER "${CMAKE_FOLDER}/fixed_precision")

benchmark_target(0001.fixed_precision fprintf)
benchmark_target(0001.fixed_precision fstream)
benchmark_target(0001.fixed_precision obuf)
benchmark_target(0001.fixed_precision parallel)
