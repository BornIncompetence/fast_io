#include <cstdio>
#include <vector>
#include "timer.hpp"

// DISCLAIMER: NOT PORTABLE!!

auto main() -> int {
    {
        const auto stream = std::fopen("fprintf.txt", "wb");
        const auto duration = bench([&](std::uint64_t i) {
            std::fprintf(stream, "%zu\n", i);
        });
        std::printf("Output: %12lld\n", duration.count());
        std::fclose(stream);
    }
    std::vector<std::uint64_t> v(N);
    {
        const auto stream = std::fopen("fprintf.txt", "rb");
        const auto duration = bench([&](std::uint64_t i) {
            std::fscanf(stream, "%zu\n", &v[i]);
        });
        std::printf("Input:  %12lld\n", duration.count());
        std::fclose(stream);
    }

    halt();
}