#include <fstream>
#include <iomanip>
#include <iostream>
#include <vector>
#include "timer.hpp"

auto main() -> int {
    std::ios::sync_with_stdio(false);
    {
        auto stream = std::ofstream("fstream.txt", std::ios::binary);
        const auto duration = bench([&](std::uint64_t i) {
            stream << i << '\n';
        });
        std::cout << "Output: " << std::setw(12) << std::right << duration.count() << std::endl;
    }
    std::vector<std::size_t> v(N);
    {
        auto stream = std::ifstream("fstream.txt", std::ios::binary);
        const auto duration = bench([&](std::uint64_t i) {
            stream >> v[i];
        });
        std::cout << "Input:  " << std::setw(12) << std::right << duration.count() << std::endl;
    }

    halt();
}