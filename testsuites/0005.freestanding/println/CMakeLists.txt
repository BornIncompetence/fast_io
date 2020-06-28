set(current_dir println)

set(CMAKE_FOLDER "${CMAKE_FOLDER}/${current_dir}")

test_nested_target(0005.freestanding ${current_dir} helloworld_linux)
