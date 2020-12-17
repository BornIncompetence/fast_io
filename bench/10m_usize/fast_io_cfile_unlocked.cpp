#include <fast_io.h>
#include <fast_io_legacy.h>
#include <vector>
#include "timer.hpp"

// DISCLAIMER: fast_io::width manipulators are currently not supported (broken on Windows)
// With some fixes to width.h, it works just fine on Linux

auto main() -> int {
    {
        auto out = fast_io::c_file_unlocked("cfile_unlocked.txt", fast_io::open_mode::binary | fast_io::open_mode::out);
        const auto duration = bench([&](std::uint64_t i) {
            println(out, i);
        });
        println("Output: ", duration.count());
    }
    std::vector<std::uint64_t> v(N);
    {
        auto in = fast_io::c_file_unlocked("cfile_unlocked.txt", fast_io::open_mode::binary | fast_io::open_mode::in);
        const auto duration = bench([&](std::uint64_t i) {
            scan(in, v[i]);
        });
        println("Input:  ", duration.count());
    }

    halt();
}