set(CMAKE_FOLDER "example")

add_executable(hello_world hw.cpp)
set_target_properties(hello_world PROPERTIES CXX_EXTENSIONS NO)
target_compile_features(hello_world PRIVATE cxx_std_20)
target_link_libraries(hello_world fast_io)

add_executable(minimal_example charview.cpp)
set_target_properties(minimal_example PROPERTIES CXX_EXTENSIONS NO)
target_compile_features(minimal_example PRIVATE cxx_std_20)
target_link_libraries(minimal_example fast_io)