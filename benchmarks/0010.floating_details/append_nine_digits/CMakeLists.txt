set(current_dir append_nine_digits)

set(CMAKE_FOLDER "${CMAKE_FOLDER}/${current_dir}")

benchmark_nested_target(0010.floating_details ${current_dir} mixture)
