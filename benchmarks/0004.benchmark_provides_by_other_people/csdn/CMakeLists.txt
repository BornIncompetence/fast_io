set(current_dir csdn)

set(CMAKE_FOLDER "${CMAKE_FOLDER}/${current_dir}")

benchmark_nested_target(0004.benchmark_provides_by_other_people ${current_dir} filefstream)
