set(CMAKE_FOLDER "${CMAKE_FOLDER}/multiprocess_proxy")

benchmark_target(0003.multiprocess_proxy client)
benchmark_target(0003.multiprocess_proxy proxy)
benchmark_target(0003.multiprocess_proxy proxy_child_process)
benchmark_target(0003.multiprocess_proxy proxy_client)
benchmark_target(0003.multiprocess_proxy server)
benchmark_target(0003.multiprocess_proxy server_child_process)
