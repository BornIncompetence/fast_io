#include <fast_io_legacy.h>
#include <fmt/format.h>
#include "timer.hpp"

// fmt::output_file is 5x faster than fmt::print for disk I/O

auto main() -> int {
    {
        auto out = fast_io::c_file("fmt_print.txt", fast_io::open_mode::binary | fast_io::open_mode::out);
        const auto duration = bench([&](std::uint64_t i) {
            fmt::print(out.native_handle(), "{}\n", i);
        });
        fmt::print("Output: {:12}\n", duration.count());
    }

    halt();
}