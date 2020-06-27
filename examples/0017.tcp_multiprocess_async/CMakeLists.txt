set(current_dir 0017.tcp_multiprocess_async)

set(CMAKE_FOLDER "${CMAKE_FOLDER}/${current_dir}")

example_target(${current_dir} client)
example_target(${current_dir} server)
example_target(${current_dir} server_child_process)
