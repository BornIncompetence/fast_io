set(current_dir 0022.utf)

set(CMAKE_FOLDER "${CMAKE_FOLDER}/${current_dir}")

example_target(${current_dir} filename)
example_target(${current_dir} read_utf8)
example_target(${current_dir} utf8_file)
example_target(${current_dir} utf8_file_to_utf16_file)
example_target(${current_dir} utf8_file_to_utf32_file)
example_target(${current_dir} utf8_to_utf16)
example_target(${current_dir} utf8_utf16)
example_target(${current_dir} utf8_utf32)
