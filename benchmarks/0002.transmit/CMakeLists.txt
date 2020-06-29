set(CMAKE_FOLDER "${CMAKE_FOLDER}/0002.transmit")

benchmark_target(0002 generate_large_file)
benchmark_target(0002 transmit)
