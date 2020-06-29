set(CMAKE_FOLDER "${CMAKE_FOLDER}/scientific_precision")

benchmark_target(0001.scientific_precision fprintf)
benchmark_target(0001.scientific_precision fstream)
benchmark_target(0001.scientific_precision obuf)
benchmark_target(0001.scientific_precision parallel)
