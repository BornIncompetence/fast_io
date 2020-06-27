set(current_dir 0001.10m_double)

set(CMAKE_FOLDER "${CMAKE_FOLDER}/${current_dir}")

example_target(${current_dir} fast_io_vs_fmt)
example_target(${current_dir} grisu_exact_vs_ryu)
example_target(${current_dir} grisu_exact_vs_ryu_newstring)
example_target(${current_dir} grisu_exact_vs_ryu_string)
example_target(${current_dir} input_10M_double)
example_target(${current_dir} input_10M_double_charconv)
example_target(${current_dir} no_teststd_output_10M_double)
example_target(${current_dir} no_teststd_output_10M_double_no_neg)
example_target(${current_dir} output_10M_double)
example_target(${current_dir} output_10M_double_scientific)
