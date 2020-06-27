set(current_dir multiprocess_proxy)

set(CMAKE_FOLDER "${CMAKE_FOLDER}/${current_dir}")

benchmark_nested_target(0003.async_tcp_echo_server ${current_dir} client)
benchmark_nested_target(0003.async_tcp_echo_server ${current_dir} proxy)
benchmark_nested_target(0003.async_tcp_echo_server ${current_dir} proxy_child_process)
benchmark_nested_target(0003.async_tcp_echo_server ${current_dir} proxy_client)
benchmark_nested_target(0003.async_tcp_echo_server ${current_dir} server)
benchmark_nested_target(0003.async_tcp_echo_server ${current_dir} server_child_process)
