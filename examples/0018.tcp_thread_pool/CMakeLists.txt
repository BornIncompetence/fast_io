set(current_dir 0018.tcp_thread_pool)

set(CMAKE_FOLDER "${CMAKE_FOLDER}/${current_dir}")

example_target(${current_dir} client)
example_target(${current_dir} server)
