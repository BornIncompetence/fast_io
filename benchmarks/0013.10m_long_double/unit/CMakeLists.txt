set(CMAKE_FOLDER "${CMAKE_FOLDER}/unit")

benchmark_target(0013.unit c_file_unlocked)
benchmark_target(0013.unit filebuf_io_observer)
benchmark_target(0013.unit fprintf)
benchmark_target(0013.unit fstream)
benchmark_target(0013.unit iobuf_file)
