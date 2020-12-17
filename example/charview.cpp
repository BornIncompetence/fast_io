#include <fast_io.h>
#include <string_view>

int main()
{
	const char * ptr = "Null-delimited C-String";
	println("ptr memory location: ", ptr);
	println("ptr memory contents: ", fast_io::chvw(ptr));
	println("ptr memory contents: ", std::string_view(ptr));
}