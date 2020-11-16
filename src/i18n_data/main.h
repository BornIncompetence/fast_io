#pragma once
#include<type_traits>
namespace fast_io_i18n
{

template<typename char_type1,std::size_t n1,typename char_type2,std::size_t n2>
inline constexpr bool compile_time_compare(char_type1 const (&a)[n1],char_type2 const (&b)[n2]) noexcept
{
	if constexpr((sizeof(char_type1)!=sizeof(char_type2))||(n1!=n2))
		return false;
	for(std::size_t i{};i!=n1;++i)
	{
		if(static_cast<std::make_unsigned_t<char_type1>>(a[i])!=static_cast<std::make_unsigned_t<char_type2>>(b[i]))
			return false;
	}
	return true;
}


extern "C" 
#ifdef _WIN32
bool __stdcall __declspec(dllexport)
#else
void
#endif
export_locale_data(lc_locale* lc_ptr) noexcept
{
	using lc_all_ptr = [[gnu::may_alias]] lc_all const*;
	lc_all_ptr ptr;
	if constexpr(compile_time_compare("😀",u8"😀"))
		ptr=reinterpret_cast<lc_all_ptr>(&u8lc_all_global);
	else
		ptr=&lc_all_global;
	using wlc_all_ptr = [[gnu::may_alias]] wlc_all const*;
	wlc_all_ptr wptr;
	if constexpr(compile_time_compare(u8"😀",L"😀"))
		wptr=reinterpret_cast<wlc_all_ptr>(&u8lc_all_global);
	else if constexpr(compile_time_compare(u"😀",L"😀"))
		wptr=reinterpret_cast<wlc_all_ptr>(&u16lc_all_global);
	else if constexpr(compile_time_compare(U"😀",L"😀"))
		wptr=reinterpret_cast<wlc_all_ptr>(&u32lc_all_global);
	else
		wptr=&wlc_all_global;
	*lc_ptr={ptr,wptr,&u8lc_all_global,&u16lc_all_global,&u32lc_all_global};
#ifdef _WIN32
	return true;
#endif
}

}