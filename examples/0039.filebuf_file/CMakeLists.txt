set(current_dir 0039.filebuf_file)

set(CMAKE_FOLDER "${CMAKE_FOLDER}/${current_dir}")

example_target(${current_dir} filebuf_file)
example_target(${current_dir} posix_file)
example_target(${current_dir} win32_file)
