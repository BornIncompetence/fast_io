set(current_dir 0014.epoll)

set(CMAKE_FOLDER "${CMAKE_FOLDER}/${current_dir}")

example_target(${current_dir} coroutine_epoll)
example_target(${current_dir} epoll)
