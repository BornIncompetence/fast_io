set(current_dir fast-read_file)

set(CMAKE_FOLDER "${CMAKE_FOLDER}/${current_dir}")

benchmark_nested_target(0004.benchmark_provides_by_other_people ${current_dir} cin)
benchmark_nested_target(0004.benchmark_provides_by_other_people ${current_dir} cin_read_nosync)
benchmark_nested_target(0004.benchmark_provides_by_other_people ${current_dir} fast_io_ibuf_file)
benchmark_nested_target(0004.benchmark_provides_by_other_people ${current_dir} fast_io_scan)
benchmark_nested_target(0004.benchmark_provides_by_other_people ${current_dir} fread_analyse)
benchmark_nested_target(0004.benchmark_provides_by_other_people ${current_dir} generate_random)
benchmark_nested_target(0004.benchmark_provides_by_other_people ${current_dir} mmap_analyse)
benchmark_nested_target(0004.benchmark_provides_by_other_people ${current_dir} read_analyse)
benchmark_nested_target(0004.benchmark_provides_by_other_people ${current_dir} scanf)
