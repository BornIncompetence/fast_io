#include <array>
#include <fast_io.h>
#include <string>
#include <string_view>

constexpr auto name = std::string_view {"Jason Born"};
constexpr auto years = 24;
constexpr auto nums = std::array {1, 2, 4, 8, 16, 31, 57, 99};

/*
auto mmap()
{
	constexpr auto options = fast_io::open_mode::in | fast_io::open_mode::out | fast_io::open_mode::app | fast_io::open_mode::trunc;

	// Reserve 10'000 bytes for mmaped file
	auto native_file = fast_io::native_file("hello_world_native.txt", options);
	truncate(native_file, 10'000);
	auto native_mmap = fast_io::native_memory_map_file(native_file, fast_io::file_map_attribute::read_write, 10'000);
	auto mmap_stream = fast_io::omemory_map(native_mmap);
	println(mmap_stream, "Hello World");
	native_mmap.close();
	truncate(native_file, mmap_stream.written_bytes());

	// The transmit example is broken currently
}
*/

auto broken()
{
	// fast_io::concat is to fast_io::print as fmt::format is to fmt::print
	// Currently doesn't compile, const char [] does not satisfy char_type concept
	// const auto fmt = fast_io::concat(1, 2, 3);

	// fast_io::to parses a string into the desired type
	// Currently broken for floating point values
	const auto r = fast_io::to<float>("2.7");
}

int main()
{
	std::int64_t a, b;
	double c;
	std::string color, error;

	// Each print statement will always call one and only one syscall for an
	// unbuffered stream. It is to ensure consistency of multi-process.
	// Do not use it for performance-centric output when you know it is an
	// unbuffered stream!

	// Prints directly to C's stdout by default. Accepts 1 or more arguments.
	// If the first argument is an output stream, it will write to that stream.
	println("My name is ", name, ". I am ", years, " years old.");
	print(fast_io::out(), "What is your favorite color? ");

	// A scan will first lock the input stream, then attempt to parse each space-
	// delimited token in order until one fails; leaving the rest uninitialized.
	// If any inputs are left in the input stream, they will be evaluated in the
	// next scan statement.

	// Performs a single-lock scan of C's stdin by default.
	// If the first argument is an input stream, it will read from that stream.
	scan(color);
	println(fast_io::out(), "Inputing some numbers to add up."); // For some reason, this line won't compile on Windows without fast_io::out() or a non-c-string argument

	// Creates an ad-hoc input stream to read from instead of stdin.
	fast_io::istring_view is {"60 bead 0.4\n"};

	// If <true>, return the number of arguments parsed, even if parsing fails.
	const auto ret = scan<true>(is, a, fast_io::hex(b), c);
	println("60 + fast_io::hex(0xbead) + 0.4 = ", a + b + c);

	// Static manipulator usage in print(). Can also be used in scan().
	println(
	"\nDec:               ", a,
	"\nBin:               ", fast_io::bin(a),
	"\nOct:               ", fast_io::oct(a),
	"\nHex:               ", fast_io::hex(a),
	"\nHex Uppercase:     ", fast_io::hexupper(a),
	"\nHex Pure:          ", fast_io::hexupper_pure(a),
	"\nBase-21:           ", fast_io::base<21>(a),
	"\nBase-21 Uppercase: ", fast_io::base<21, true>(a),
	"\n------Floating point options------",
	"\ncomma instead of period:  ", fast_io::comma(c),
	"\nfixed point:              ", fast_io::fixed(c),
	"\nscientific:               ", fast_io::scientific(c),
	"\ngeneral 10 pt. precision: ", fast_io::general(c, 10));

	// fast_io does not treat char * as strings, by default. C-Strings must be
	// wrapped by either a string-ish type or a static manipulator
	const char* ptr = "Null-delimited C-String";
	println("ptr memory location: ", ptr);
	// println("\nptr memory contents: ", fast_io::chvw(ptr)); Doesn't compile on Windows

	// Creates an ad-hoc output stream to write to instead of stdout or stderr
	fast_io::ostring_ref os {error};

	println(os, "\nscan<true>(is, a, fast_io::hex(b), c) returned ", ret, ". Apparently ", name, "'s favorite color was ", color);

	// Prints to the native error stream on your platform. Not synchronized with
	// C's stderr. Always unbuffered.
	perrln(error);

	// broken();

	// Line generator can only be used with c_stdin() afaik, other input streams in
	// fast_io_core don't satisfy its concepts
	for(const auto& line : line_generator(fast_io::c_stdin())) {
		if(line.empty()) {
			break;
		}
		print(line, ",");
	}

	// Apparently this library allows native file access with just one header
	// mmap();

}
