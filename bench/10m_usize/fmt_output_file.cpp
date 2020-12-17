#include <fmt/os.h>
#include "timer.hpp"

// This library supports type-to-string only, no string-to-type conversions

auto main() -> int {
    {
        auto out = fmt::output_file("output_file.txt");
        const auto duration = bench([&](std::uint64_t i) {
            out.print("{}\n", i);
        });
        fmt::print("Output: {:12}\n", duration.count());
    }

    halt();
}