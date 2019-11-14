#pragma once

namespace fast_io
{

namespace details
{

template<std::size_t bs,bool uppercase=false>
struct base_number_upper_constraints
{
	explicit base_number_upper_constraints() = default;
	static constexpr bool value = 2<=bs&&bs<=36&&((bs<=10&&!uppercase)||10<bs);
};

template<std::uint8_t base,bool uppercase,bool point=false,std::random_access_iterator Iter,std::unsigned_integral U>
inline constexpr auto output_base_number_impl(Iter iter,U a)
{
//number: 0:48 9:57
//upper: 65 :A 70: F
//lower: 97 :a 102 :f
	constexpr auto &table(details::shared_static_base_table<base,uppercase>::table);
	constexpr std::uint16_t pw(table.size());
	constexpr std::size_t chars(table.front().size());
	for(;pw<=a;)
	{
		auto const rem(a%pw);
		a/=pw;
		std::copy_n(table[rem].data(),chars,iter-=chars);
	}
	if constexpr(chars==2)
	{
		if(base<=a)
		{
			auto const& tm(table[a]);
			
			if constexpr(point)
			{
				*--iter=tm[1];
				*--iter='.';
				*--iter=tm.front();
			}
			else
			{
				std::copy_n(tm.data(),chars,iter-=chars);
			}
		}
		else
		{
			if constexpr(point)
				*--iter='.';
			if constexpr(10 < base)
			{
				if(a<10)
					*--iter = a+'0';
				else
				{
					if constexpr (uppercase)
						*--iter = a+55;	
					else
						*--iter = a+87;
				}
			}
			else
				*--iter=a+'0';
		}
	}
	else
	{
		if(base<=a)
		{
			auto const& tm(table[a]);
			auto i(tm.data());
			for(;*i=='0';++i);
			auto const ed(tm.data()+chars);
			if constexpr(point)
			{
				std::copy(i+1,ed,iter-=ed-(i+1));
				*--iter='.';
				*--iter=*i;
			}
			else
				std::copy(i,ed,iter-=ed-i);
		}
		else
		{
			if constexpr(point)
				*--iter='.';
			if constexpr(10 < base)
			{
				if(a<10)
					*--iter = a+'0';
				else
				{
					if constexpr (uppercase)
						*--iter = a+55;	
					else
						*--iter = a+87;
				}
			}
			else
				*--iter=a+'0';
		}
	}
	return iter;
}

template<std::uint32_t base,bool ryu_mode=false,std::unsigned_integral U>
inline constexpr std::size_t chars_len(U value) noexcept
{
	if constexpr(base==10&&sizeof(U)<9)
	{
		if constexpr(7<sizeof(U))
		{
			if constexpr(!ryu_mode)
			{
				if(10000000000000000000ULL<=value)
					return 20;
				if(1000000000000000000ULL<=value)
					return 19;
				if(100000000000000000ULL<=value)
					return 18;
			}
			if(10000000000000000ULL<=value)
				return 17;
			if(1000000000000000ULL<=value)
				return 16;
			if(100000000000000ULL<=value)
				return 15;
			if(10000000000000ULL<=value)
				return 14;
			if(1000000000000ULL<=value)
				return 13;
			if(100000000000ULL<=value)
				return 12;
			if(10000000000ULL<=value)
				return 11;
		}
		if constexpr(3<sizeof(U))
		{
			if constexpr(4<sizeof(U)||!ryu_mode)
			{
				if(1000000000U<=value)
					return 10;
			}
			if(100000000U<=value)
				return 9;
			if(10000000U<=value)
				return 8;
			if(1000000U<=value)
				return 7;
			if(100000U<=value)
				return 6;
			if(10000U<=value)
				return 5;
			if(1000U<=value)
				return 4;
			if(100U<=value)
				return 3;
			if(10U<=value)
				return 2;
			return 1;
		}
	}
	else
	{
		constexpr std::uint32_t base2(base  * base);
		constexpr std::uint32_t base3(base2 * base);
		constexpr std::uint32_t base4(base3 * base);
		for (std::size_t n(1);;n+=4)
		{
			if (value < base)
				return n;
			if (value < base2)
				return n + 1;
			if (value < base3)
				return n + 2;
			if (value < base4)
				return n + 3;
			value /= base4;
		}
	}
}

template<std::uint8_t base,bool uppercase,output_stream output,std::unsigned_integral U>
inline constexpr void output_base_number(output& out,U a)
{
	if constexpr(buffer_output_stream<output>)
	{
		auto reserved(oreserve(out,chars_len<base>(a)));
		if constexpr(std::is_pointer_v<decltype(reserved)>)
		{
			if(reserved)
			{
				output_base_number_impl<base,uppercase>(reserved,a);
				return;
			}
		}
		else
		{
			output_base_number_impl<base,uppercase>(reserved,a);
			return;
		}
	}
	std::array<typename output::char_type,sizeof(a)*8> v;
	auto const e(v.data()+v.size());
	writes(out,output_base_number_impl<base,uppercase>(e,a),e);
}

template<std::uint8_t base,bool uppercase,output_stream output,std::signed_integral T>
inline constexpr void output_base_number(output& out,T b)
{
	bool const minus(b<0);
	auto const a(static_cast<std::make_unsigned_t<T>>(minus?-b:b));
	if constexpr(buffer_output_stream<output>)
	{
		auto reserved(oreserve(out,chars_len<base>(a)+minus));
		if constexpr(std::is_pointer_v<decltype(reserved)>)
		{
			if(reserved)
			{
				auto p(output_base_number_impl<base,uppercase>(reserved,a));
				if(minus)
					*--p='-';
				return;
			}
		}
		else
		{
			auto p(output_base_number_impl<base,uppercase>(reserved,a));
			if(minus)
				*--p='-';
			return;
		}
	}
	std::array<typename output::char_type,sizeof(a)*8+1> v;
	auto const e(v.data()+v.size());
	auto iter(output_base_number_impl<base,uppercase>(e,a));
	if(minus)
		*--iter='-';
	writes(out,iter,e);
}

template<std::uint8_t base,character_input_stream input,std::integral U>
inline constexpr void input_base_number_phase2(input& in,U& a)
{
	using unsigned_char_type = std::make_unsigned_t<decltype(get(in))>;
	unsigned_char_type constexpr baseed(std::min(static_cast<unsigned_char_type>(base),static_cast<unsigned_char_type>(10)));
	while(true)
	{
		unsigned_char_type ch(try_get(in).first);
		if((ch-=48)<baseed)
			a=a*base+ch;
		else if constexpr (10 < base)
		{
			unsigned_char_type constexpr bm10(base-10);
			if((ch-=17)<bm10||(ch-=32)<bm10)
				a=a*base+(ch+10);
			else
				return;
		}
		else
			return;
	}
}

template<std::uint8_t base,character_input_stream input,std::unsigned_integral U>
inline constexpr void input_base_number(input& in,U& a)
{
	using unsigned_char_type = std::make_unsigned_t<decltype(get(in))>;
	unsigned_char_type constexpr baseed(std::min(static_cast<unsigned_char_type>(base),static_cast<unsigned_char_type>(10)));
	while(true)
	{
		unsigned_char_type ch(get(in));
		if((ch-=48)<baseed)
		{
			a=ch;
			break;
		}
		else if constexpr (10 < base)
		{
			unsigned_char_type constexpr bm10(base-10);
			if((ch-=17)<bm10||(ch-=32)<bm10)
			{
				a=ch+10;
				break;
			}
		}
	}
	input_base_number_phase2<base>(in,a);
}
template<std::uint8_t base,character_input_stream input, std::signed_integral T>
inline constexpr void input_base_number(input& in,T& a)
{
	using unsigned_char_type = std::make_unsigned_t<decltype(get(in))>;
	unsigned_char_type constexpr baseed(std::min(static_cast<unsigned_char_type>(base),static_cast<unsigned_char_type>(10)));
	bool rev(false);
	while(true)
	{
		unsigned_char_type ch(get(in));
		if(ch==45)
		{
			a=0;
			rev=true;
			break;
		}
		else if((ch-=48)<baseed)
		{
			a=ch;
			break;
		}
		else if constexpr (10 < base)
		{
			unsigned_char_type constexpr bm10(base-10);
			if((ch-=17)<bm10||(ch-=32)<bm10)
			{
				a=ch+10;
				break;
			}
		}
	}
	input_base_number_phase2<base>(in,a);
	if(rev)
		a=-a;
}

}

namespace manip
{
	
template<std::size_t bs,bool uppercase,typename T>
requires fast_io::details::base_number_upper_constraints<bs,uppercase>::value
struct base_t
{
	T& reference;
};

}

template<std::size_t b,bool uppercase=false,typename T>
inline constexpr manip::base_t<b,uppercase,T> base(T& t) {return {t};}
template<std::size_t b,bool uppercase=false,typename T>
inline constexpr manip::base_t<b,uppercase,T const> base(T const& t) {return {t};}

template<typename T> inline constexpr manip::base_t<16,false,T> hex(T& t) {return {t};}
template<typename T> inline constexpr manip::base_t<16,false,T const> hex(T const& t){return {t};}

template<typename T> inline constexpr manip::base_t<16,true,T> hexupper(T& t){return {t};}
template<typename T> inline constexpr manip::base_t<16,true,T const> hexupper(T const& t) {return {t};}

template<typename T> inline constexpr manip::base_t<8,false,T> oct(T& t) {return {t};}
template<typename T> inline constexpr manip::base_t<8,false,T const> oct(T const& t){return {t};}

template<typename T> inline constexpr manip::base_t<10,false,T> dec(T& t) {return {t};}
template<typename T> inline constexpr manip::base_t<10,false,T const> dec(T const& t){return {t};}

template<typename T> inline constexpr manip::base_t<2,false,T> bin(T& t){return {t};}
template<typename T> inline constexpr manip::base_t<2,false,T const> bin(T const& t) {return {t};}

template<std::size_t base,bool uppercase,character_output_stream output,std::integral T>
inline constexpr void print_define(output& out,manip::base_t<base,uppercase,T> v)
{
	details::output_base_number<base,uppercase>(out,v.reference);
}

template<std::size_t base,bool uppercase,character_input_stream input,std::integral T>
inline constexpr void scan_define(input& in,manip::base_t<base,uppercase,T> v)
{
	details::input_base_number<base>(in,v.reference);
}


template<character_input_stream input,std::integral T>
inline constexpr void scan_define(input& in,T& a)
{
	details::input_base_number<10>(in,a);
}

template<character_output_stream output,std::integral T>
inline constexpr void print_define(output& out,T const& a)
{
	details::output_base_number<10,false>(out,a);
}

}
