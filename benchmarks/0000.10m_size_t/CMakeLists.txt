set(current_dir 0000.10m_size_t)

set(CMAKE_FOLDER "${CMAKE_FOLDER}/${current_dir}")

add_subdirectory(legacy)
add_subdirectory(random)
add_subdirectory(raw)
add_subdirectory(strings)
add_subdirectory(unit)
add_subdirectory(with_crypto)