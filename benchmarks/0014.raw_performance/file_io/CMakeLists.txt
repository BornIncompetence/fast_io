set(CMAKE_FOLDER "${CMAKE_FOLDER}/file_io")

benchmark_target(0014.file_io c_file)
benchmark_target(0014.file_io c_file_unlocked)
benchmark_target(0014.file_io filebuf_file)
benchmark_target(0014.file_io fstream)
benchmark_target(0014.file_io fwrite)
benchmark_target(0014.file_io obuf_file)
benchmark_target(0014.file_io obuf_file_mutex)
