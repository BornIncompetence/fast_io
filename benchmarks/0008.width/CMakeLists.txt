set(current_dir 0008.width)

set(CMAKE_FOLDER "${CMAKE_FOLDER}/${current_dir}")

example_target(${current_dir} c_file)
example_target(${current_dir} c_file_unlocked)
example_target(${current_dir} filebuf_io_observer)
example_target(${current_dir} fprintf)
example_target(${current_dir} obuf_file)
