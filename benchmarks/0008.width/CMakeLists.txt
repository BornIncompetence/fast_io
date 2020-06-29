set(CMAKE_FOLDER "${CMAKE_FOLDER}/0008.width")

benchmark_target(0008 c_file)
benchmark_target(0008 c_file_unlocked)
benchmark_target(0008 filebuf_io_observer)
benchmark_target(0008 fprintf)
benchmark_target(0008 obuf_file)
