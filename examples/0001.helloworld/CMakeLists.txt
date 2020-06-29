set(current_dir 0001.helloworld)

set(CMAKE_FOLDER "${CMAKE_FOLDER}/0001.helloworld")

if (WIN32)
	example_target(0001 hello_world_win32_box)
endif(WIN32)
example_target(0001 hw)
example_target(0001 hw_u8)
