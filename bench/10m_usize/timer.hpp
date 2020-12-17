#pragma once

#include <chrono>

constexpr auto N = std::uint64_t {10000000};
constexpr auto EXPECTED = (N * N >> 1) - (N >> 1);

// My IDE hides the Linux console window after it's done executing
#if defined(_WIN32)
inline void halt() {}
#else
#include <thread>
inline void halt() {
	using namespace std::chrono_literals;
	std::this_thread::sleep_for(10s);
}
#endif // defined(_WIN32)


template<class F>
inline constexpr auto bench(F f)
{
	const auto start = std::chrono::steady_clock::now();

	for (std::uint64_t i{}; i != N; ++i) {
		f(i);
	}

	return std::chrono::duration_cast<std::chrono::nanoseconds>(std::chrono::steady_clock::now() - start);
}