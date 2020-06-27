set(current_dir unit)

set(CMAKE_FOLDER "${CMAKE_FOLDER}/${current_dir}")

benchmark_nested_target(0019.text ${current_dir} basic_obuf_posix_file_text)
benchmark_nested_target(0019.text ${current_dir} iobuf_text_file)
