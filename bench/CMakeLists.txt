set(CMAKE_FOLDER "bench")

function(exec ARG)
	add_executable(${ARG} "10m_usize/${ARG}.cpp")
	target_compile_features(${ARG} PRIVATE cxx_std_20)
endfunction()

# Builtin standard library facilities

exec(cstd_cstdio)

exec(cpp_fstream)

# fmtlib

find_package(fmt)

exec(fmt_output_file)
target_link_libraries(fmt_output_file fmt::fmt)

exec(fmt_print)
target_link_libraries(fmt_print fmt::fmt)
target_link_libraries(fmt_print fast_io)

# fast_io

exec(fast_io_iobuf)
set_target_properties(fast_io_iobuf PROPERTIES CXX_EXTENSIONS YES)
target_link_libraries(fast_io_iobuf fast_io)

exec(fast_io_iobuf_mutex)
set_target_properties(fast_io_iobuf_mutex PROPERTIES CXX_EXTENSIONS YES)
target_link_libraries(fast_io_iobuf_mutex fast_io)

exec(fast_io_cfile)
set_target_properties(fast_io_cfile PROPERTIES CXX_EXTENSIONS YES)
target_link_libraries(fast_io_cfile fast_io)

exec(fast_io_cfile_unlocked)
set_target_properties(fast_io_cfile_unlocked PROPERTIES CXX_EXTENSIONS YES)
target_link_libraries(fast_io_cfile_unlocked fast_io)

exec(fast_io_filebuf)
set_target_properties(fast_io_filebuf PROPERTIES CXX_EXTENSIONS YES)
target_link_libraries(fast_io_filebuf fast_io)

exec(sanity_check)
set_target_properties(sanity_check PROPERTIES CXX_EXTENSIONS YES)
target_link_libraries(sanity_check fast_io)