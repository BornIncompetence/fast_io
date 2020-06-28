set(current_dir hello_world)

set(CMAKE_FOLDER "${CMAKE_FOLDER}/${current_dir}")

test_nested_target(0005.freestanding ${current_dir} cout)
test_nested_target(0005.freestanding ${current_dir} helloworld_linux)
test_nested_target(0005.freestanding ${current_dir} helloworld_nt)
test_nested_target(0005.freestanding ${current_dir} helloworld_win32)
test_nested_target(0005.freestanding ${current_dir} helloworld_win32_local)
test_nested_target(0005.freestanding ${current_dir} helloworld_win32_raw)
