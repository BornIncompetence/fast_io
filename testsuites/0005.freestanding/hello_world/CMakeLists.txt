set(CMAKE_FOLDER "${CMAKE_FOLDER}/hello_world")

test_target(0005.hello_world cout)
test_target(0005.hello_world helloworld_linux)
test_target(0005.hello_world helloworld_nt)
test_target(0005.hello_world helloworld_win32)
test_target(0005.hello_world helloworld_win32_local)
test_target(0005.hello_world helloworld_win32_raw)
