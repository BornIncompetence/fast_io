set(current_dir unit)

set(CMAKE_FOLDER "${CMAKE_FOLDER}/${current_dir}")

benchmark_nested_target(0012.10m_(u)int128_t ${current_dir} iobuf_file)
benchmark_nested_target(0012.10m_(u)int128_t ${current_dir} iobuf_file_large)
