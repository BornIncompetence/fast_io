#include"../localedef.h"

namespace fast_io_i18n
{
namespace
{

inline constexpr std::size_t numeric_grouping_storage[]{3};

inline constexpr basic_io_scatter_t<char> time_era_storage[]{tsc("+:1:-543//01//01:+*:ພ.ສ.:%EC %Ey")};

inline constexpr lc_all lc_all_global{.identification={.title=tsc("Lao locale for Laos"),.source=tsc("fast_io"),.address=tsc("https://github.com/expnkx/fast_io"),.contact=tsc("Anousak Souphavanh at: anousak@muanglao.com\t\t;\t\tfast_io"),.email=tsc("bug-glibc-locales@gnu.org;euloanty@live.com"),.tel=tsc(""),.fax=tsc(""),.language=tsc("Lao"),.territory=tsc("Laos"),.revision=tsc("1.0"),.date=tsc("2003-4-1")},.monetary={.int_curr_symbol=tsc("LAK "),.currency_symbol=tsc("₭"),.mon_decimal_point=tsc("."),.mon_thousands_sep=tsc(","),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(""),.negative_sign=tsc("-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=1,.p_sep_by_space=2,.n_cs_precedes=1,.n_sep_by_space=2,.p_sign_posn=4,.n_sign_posn=4},.numeric={.decimal_point=tsc("."),.thousands_sep=tsc(","),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc("ອາ."),tsc("ຈ."),tsc("ຄ."),tsc("ພ."),tsc("ພຫ."),tsc("ສ."),tsc("ສ.")},.day={tsc("ອາທິດ"),tsc("ຈັນ"),tsc("ອັງຄານ"),tsc("ພຸດ"),tsc("ພະຫັດ"),tsc("ສຸກ"),tsc("ເສົາ")},.abmon={tsc("ມ.ກ."),tsc("ກ.ພ."),tsc("ມ.ນ."),tsc("ມ.ສ."),tsc("ພ.ພ."),tsc("ມິ.ຖ."),tsc("ກ.ລ."),tsc("ສ.ຫ."),tsc("ກ.ຍ."),tsc("ຕ.ລ."),tsc("ພ.ຈ."),tsc("ທ.ວ.")},.mon={tsc("ມັງກອນ"),tsc("ກຸມພາ"),tsc("ມີນາ"),tsc("ເມສາ"),tsc("ພຶດສະພາ"),tsc("ມິຖຸນາ"),tsc("ກໍລະກົດ"),tsc("ສິງຫາ"),tsc("ກັນຍາ"),tsc("ຕຸລາ"),tsc("ພະຈິກ"),tsc("ທັນວາ")},.d_t_fmt=tsc("%a %e %b %Ey, %H:%M:%S"),.d_fmt=tsc("%d//%m//%Ey"),.t_fmt=tsc("%H:%M:%S"),.t_fmt_ampm=tsc("%I:%M:%S %p"),.date_fmt=tsc("%a %e %b %Ey %H:%M:%S %Z"),.am_pm={tsc("AM"),tsc("PM")},.era={time_era_storage,1},.era_d_fmt=tsc("%e %b %Ey"),.era_d_t_fmt=tsc("ວັນ%Aທີ່ %e %B %EC %Ey, %H.%M.%S ນ."),.era_t_fmt=tsc("%H.%M.%S ນ."),.week={7,19971130,1}},.messages={.yesexpr=tsc("^[+1yYມ]"),.noexpr=tsc("^[-0nNບ]"),.yesstr=tsc("ແມ່ນ"),.nostr=tsc("ບໍ່ແມ່ນ")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc("+%c %a %l"),.tel_dom_fmt=tsc("(%A)%l"),.int_select=tsc("001"),.int_prefix=tsc("856")},.name={.name_fmt=tsc("%d%t%g%t%m%t%f"),.name_mr=tsc("ທ."),.name_mrs=tsc("ນ.")},.address={.postal_fmt=tsc("%f%N%a%N%d%N%r%t%e%t%b%N%h%t%s%N%T%N%S%N%z%c%N"),.country_name=tsc("ລາວ"),.country_ab2=tsc("LA"),.country_ab3=tsc("LAO"),.country_num=418,.country_car=tsc("LAO"),.lang_name=tsc("ລາວ"),.lang_ab=tsc("lo"),.lang_term=tsc("lao"),.lang_lib=tsc("lao")},.measurement={.measurement=1}};

inline constexpr basic_io_scatter_t<wchar_t> wtime_era_storage[]{tsc(L"+:1:-543//01//01:+*:ພ.ສ.:%EC %Ey")};

inline constexpr wlc_all wlc_all_global{.identification={.title=tsc(L"Lao locale for Laos"),.source=tsc(L"fast_io"),.address=tsc(L"https://github.com/expnkx/fast_io"),.contact=tsc(L"Anousak Souphavanh at: anousak@muanglao.com\t\t;\t\tfast_io"),.email=tsc(L"bug-glibc-locales@gnu.org;euloanty@live.com"),.tel=tsc(L""),.fax=tsc(L""),.language=tsc(L"Lao"),.territory=tsc(L"Laos"),.revision=tsc(L"1.0"),.date=tsc(L"2003-4-1")},.monetary={.int_curr_symbol=tsc(L"LAK "),.currency_symbol=tsc(L"₭"),.mon_decimal_point=tsc(L"."),.mon_thousands_sep=tsc(L","),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(L""),.negative_sign=tsc(L"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=1,.p_sep_by_space=2,.n_cs_precedes=1,.n_sep_by_space=2,.p_sign_posn=4,.n_sign_posn=4},.numeric={.decimal_point=tsc(L"."),.thousands_sep=tsc(L","),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(L"ອາ."),tsc(L"ຈ."),tsc(L"ຄ."),tsc(L"ພ."),tsc(L"ພຫ."),tsc(L"ສ."),tsc(L"ສ.")},.day={tsc(L"ອາທິດ"),tsc(L"ຈັນ"),tsc(L"ອັງຄານ"),tsc(L"ພຸດ"),tsc(L"ພະຫັດ"),tsc(L"ສຸກ"),tsc(L"ເສົາ")},.abmon={tsc(L"ມ.ກ."),tsc(L"ກ.ພ."),tsc(L"ມ.ນ."),tsc(L"ມ.ສ."),tsc(L"ພ.ພ."),tsc(L"ມິ.ຖ."),tsc(L"ກ.ລ."),tsc(L"ສ.ຫ."),tsc(L"ກ.ຍ."),tsc(L"ຕ.ລ."),tsc(L"ພ.ຈ."),tsc(L"ທ.ວ.")},.mon={tsc(L"ມັງກອນ"),tsc(L"ກຸມພາ"),tsc(L"ມີນາ"),tsc(L"ເມສາ"),tsc(L"ພຶດສະພາ"),tsc(L"ມິຖຸນາ"),tsc(L"ກໍລະກົດ"),tsc(L"ສິງຫາ"),tsc(L"ກັນຍາ"),tsc(L"ຕຸລາ"),tsc(L"ພະຈິກ"),tsc(L"ທັນວາ")},.d_t_fmt=tsc(L"%a %e %b %Ey, %H:%M:%S"),.d_fmt=tsc(L"%d//%m//%Ey"),.t_fmt=tsc(L"%H:%M:%S"),.t_fmt_ampm=tsc(L"%I:%M:%S %p"),.date_fmt=tsc(L"%a %e %b %Ey %H:%M:%S %Z"),.am_pm={tsc(L"AM"),tsc(L"PM")},.era={wtime_era_storage,1},.era_d_fmt=tsc(L"%e %b %Ey"),.era_d_t_fmt=tsc(L"ວັນ%Aທີ່ %e %B %EC %Ey, %H.%M.%S ນ."),.era_t_fmt=tsc(L"%H.%M.%S ນ."),.week={7,19971130,1}},.messages={.yesexpr=tsc(L"^[+1yYມ]"),.noexpr=tsc(L"^[-0nNບ]"),.yesstr=tsc(L"ແມ່ນ"),.nostr=tsc(L"ບໍ່ແມ່ນ")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(L"+%c %a %l"),.tel_dom_fmt=tsc(L"(%A)%l"),.int_select=tsc(L"001"),.int_prefix=tsc(L"856")},.name={.name_fmt=tsc(L"%d%t%g%t%m%t%f"),.name_mr=tsc(L"ທ."),.name_mrs=tsc(L"ນ.")},.address={.postal_fmt=tsc(L"%f%N%a%N%d%N%r%t%e%t%b%N%h%t%s%N%T%N%S%N%z%c%N"),.country_name=tsc(L"ລາວ"),.country_ab2=tsc(L"LA"),.country_ab3=tsc(L"LAO"),.country_num=418,.country_car=tsc(L"LAO"),.lang_name=tsc(L"ລາວ"),.lang_ab=tsc(L"lo"),.lang_term=tsc(L"lao"),.lang_lib=tsc(L"lao")},.measurement={.measurement=1}};

inline constexpr basic_io_scatter_t<char8_t> u8time_era_storage[]{tsc(u8"+:1:-543//01//01:+*:ພ.ສ.:%EC %Ey")};

inline constexpr u8lc_all u8lc_all_global{.identification={.title=tsc(u8"Lao locale for Laos"),.source=tsc(u8"fast_io"),.address=tsc(u8"https://github.com/expnkx/fast_io"),.contact=tsc(u8"Anousak Souphavanh at: anousak@muanglao.com\t\t;\t\tfast_io"),.email=tsc(u8"bug-glibc-locales@gnu.org;euloanty@live.com"),.tel=tsc(u8""),.fax=tsc(u8""),.language=tsc(u8"Lao"),.territory=tsc(u8"Laos"),.revision=tsc(u8"1.0"),.date=tsc(u8"2003-4-1")},.monetary={.int_curr_symbol=tsc(u8"LAK "),.currency_symbol=tsc(u8"₭"),.mon_decimal_point=tsc(u8"."),.mon_thousands_sep=tsc(u8","),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(u8""),.negative_sign=tsc(u8"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=1,.p_sep_by_space=2,.n_cs_precedes=1,.n_sep_by_space=2,.p_sign_posn=4,.n_sign_posn=4},.numeric={.decimal_point=tsc(u8"."),.thousands_sep=tsc(u8","),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(u8"ອາ."),tsc(u8"ຈ."),tsc(u8"ຄ."),tsc(u8"ພ."),tsc(u8"ພຫ."),tsc(u8"ສ."),tsc(u8"ສ.")},.day={tsc(u8"ອາທິດ"),tsc(u8"ຈັນ"),tsc(u8"ອັງຄານ"),tsc(u8"ພຸດ"),tsc(u8"ພະຫັດ"),tsc(u8"ສຸກ"),tsc(u8"ເສົາ")},.abmon={tsc(u8"ມ.ກ."),tsc(u8"ກ.ພ."),tsc(u8"ມ.ນ."),tsc(u8"ມ.ສ."),tsc(u8"ພ.ພ."),tsc(u8"ມິ.ຖ."),tsc(u8"ກ.ລ."),tsc(u8"ສ.ຫ."),tsc(u8"ກ.ຍ."),tsc(u8"ຕ.ລ."),tsc(u8"ພ.ຈ."),tsc(u8"ທ.ວ.")},.mon={tsc(u8"ມັງກອນ"),tsc(u8"ກຸມພາ"),tsc(u8"ມີນາ"),tsc(u8"ເມສາ"),tsc(u8"ພຶດສະພາ"),tsc(u8"ມິຖຸນາ"),tsc(u8"ກໍລະກົດ"),tsc(u8"ສິງຫາ"),tsc(u8"ກັນຍາ"),tsc(u8"ຕຸລາ"),tsc(u8"ພະຈິກ"),tsc(u8"ທັນວາ")},.d_t_fmt=tsc(u8"%a %e %b %Ey, %H:%M:%S"),.d_fmt=tsc(u8"%d//%m//%Ey"),.t_fmt=tsc(u8"%H:%M:%S"),.t_fmt_ampm=tsc(u8"%I:%M:%S %p"),.date_fmt=tsc(u8"%a %e %b %Ey %H:%M:%S %Z"),.am_pm={tsc(u8"AM"),tsc(u8"PM")},.era={u8time_era_storage,1},.era_d_fmt=tsc(u8"%e %b %Ey"),.era_d_t_fmt=tsc(u8"ວັນ%Aທີ່ %e %B %EC %Ey, %H.%M.%S ນ."),.era_t_fmt=tsc(u8"%H.%M.%S ນ."),.week={7,19971130,1}},.messages={.yesexpr=tsc(u8"^[+1yYມ]"),.noexpr=tsc(u8"^[-0nNບ]"),.yesstr=tsc(u8"ແມ່ນ"),.nostr=tsc(u8"ບໍ່ແມ່ນ")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(u8"+%c %a %l"),.tel_dom_fmt=tsc(u8"(%A)%l"),.int_select=tsc(u8"001"),.int_prefix=tsc(u8"856")},.name={.name_fmt=tsc(u8"%d%t%g%t%m%t%f"),.name_mr=tsc(u8"ທ."),.name_mrs=tsc(u8"ນ.")},.address={.postal_fmt=tsc(u8"%f%N%a%N%d%N%r%t%e%t%b%N%h%t%s%N%T%N%S%N%z%c%N"),.country_name=tsc(u8"ລາວ"),.country_ab2=tsc(u8"LA"),.country_ab3=tsc(u8"LAO"),.country_num=418,.country_car=tsc(u8"LAO"),.lang_name=tsc(u8"ລາວ"),.lang_ab=tsc(u8"lo"),.lang_term=tsc(u8"lao"),.lang_lib=tsc(u8"lao")},.measurement={.measurement=1}};

inline constexpr basic_io_scatter_t<char16_t> u16time_era_storage[]{tsc(u"+:1:-543//01//01:+*:ພ.ສ.:%EC %Ey")};

inline constexpr u16lc_all u16lc_all_global{.identification={.title=tsc(u"Lao locale for Laos"),.source=tsc(u"fast_io"),.address=tsc(u"https://github.com/expnkx/fast_io"),.contact=tsc(u"Anousak Souphavanh at: anousak@muanglao.com\t\t;\t\tfast_io"),.email=tsc(u"bug-glibc-locales@gnu.org;euloanty@live.com"),.tel=tsc(u""),.fax=tsc(u""),.language=tsc(u"Lao"),.territory=tsc(u"Laos"),.revision=tsc(u"1.0"),.date=tsc(u"2003-4-1")},.monetary={.int_curr_symbol=tsc(u"LAK "),.currency_symbol=tsc(u"₭"),.mon_decimal_point=tsc(u"."),.mon_thousands_sep=tsc(u","),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(u""),.negative_sign=tsc(u"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=1,.p_sep_by_space=2,.n_cs_precedes=1,.n_sep_by_space=2,.p_sign_posn=4,.n_sign_posn=4},.numeric={.decimal_point=tsc(u"."),.thousands_sep=tsc(u","),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(u"ອາ."),tsc(u"ຈ."),tsc(u"ຄ."),tsc(u"ພ."),tsc(u"ພຫ."),tsc(u"ສ."),tsc(u"ສ.")},.day={tsc(u"ອາທິດ"),tsc(u"ຈັນ"),tsc(u"ອັງຄານ"),tsc(u"ພຸດ"),tsc(u"ພະຫັດ"),tsc(u"ສຸກ"),tsc(u"ເສົາ")},.abmon={tsc(u"ມ.ກ."),tsc(u"ກ.ພ."),tsc(u"ມ.ນ."),tsc(u"ມ.ສ."),tsc(u"ພ.ພ."),tsc(u"ມິ.ຖ."),tsc(u"ກ.ລ."),tsc(u"ສ.ຫ."),tsc(u"ກ.ຍ."),tsc(u"ຕ.ລ."),tsc(u"ພ.ຈ."),tsc(u"ທ.ວ.")},.mon={tsc(u"ມັງກອນ"),tsc(u"ກຸມພາ"),tsc(u"ມີນາ"),tsc(u"ເມສາ"),tsc(u"ພຶດສະພາ"),tsc(u"ມິຖຸນາ"),tsc(u"ກໍລະກົດ"),tsc(u"ສິງຫາ"),tsc(u"ກັນຍາ"),tsc(u"ຕຸລາ"),tsc(u"ພະຈິກ"),tsc(u"ທັນວາ")},.d_t_fmt=tsc(u"%a %e %b %Ey, %H:%M:%S"),.d_fmt=tsc(u"%d//%m//%Ey"),.t_fmt=tsc(u"%H:%M:%S"),.t_fmt_ampm=tsc(u"%I:%M:%S %p"),.date_fmt=tsc(u"%a %e %b %Ey %H:%M:%S %Z"),.am_pm={tsc(u"AM"),tsc(u"PM")},.era={u16time_era_storage,1},.era_d_fmt=tsc(u"%e %b %Ey"),.era_d_t_fmt=tsc(u"ວັນ%Aທີ່ %e %B %EC %Ey, %H.%M.%S ນ."),.era_t_fmt=tsc(u"%H.%M.%S ນ."),.week={7,19971130,1}},.messages={.yesexpr=tsc(u"^[+1yYມ]"),.noexpr=tsc(u"^[-0nNບ]"),.yesstr=tsc(u"ແມ່ນ"),.nostr=tsc(u"ບໍ່ແມ່ນ")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(u"+%c %a %l"),.tel_dom_fmt=tsc(u"(%A)%l"),.int_select=tsc(u"001"),.int_prefix=tsc(u"856")},.name={.name_fmt=tsc(u"%d%t%g%t%m%t%f"),.name_mr=tsc(u"ທ."),.name_mrs=tsc(u"ນ.")},.address={.postal_fmt=tsc(u"%f%N%a%N%d%N%r%t%e%t%b%N%h%t%s%N%T%N%S%N%z%c%N"),.country_name=tsc(u"ລາວ"),.country_ab2=tsc(u"LA"),.country_ab3=tsc(u"LAO"),.country_num=418,.country_car=tsc(u"LAO"),.lang_name=tsc(u"ລາວ"),.lang_ab=tsc(u"lo"),.lang_term=tsc(u"lao"),.lang_lib=tsc(u"lao")},.measurement={.measurement=1}};

inline constexpr basic_io_scatter_t<char32_t> u32time_era_storage[]{tsc(U"+:1:-543//01//01:+*:ພ.ສ.:%EC %Ey")};

inline constexpr u32lc_all u32lc_all_global{.identification={.title=tsc(U"Lao locale for Laos"),.source=tsc(U"fast_io"),.address=tsc(U"https://github.com/expnkx/fast_io"),.contact=tsc(U"Anousak Souphavanh at: anousak@muanglao.com\t\t;\t\tfast_io"),.email=tsc(U"bug-glibc-locales@gnu.org;euloanty@live.com"),.tel=tsc(U""),.fax=tsc(U""),.language=tsc(U"Lao"),.territory=tsc(U"Laos"),.revision=tsc(U"1.0"),.date=tsc(U"2003-4-1")},.monetary={.int_curr_symbol=tsc(U"LAK "),.currency_symbol=tsc(U"₭"),.mon_decimal_point=tsc(U"."),.mon_thousands_sep=tsc(U","),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(U""),.negative_sign=tsc(U"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=1,.p_sep_by_space=2,.n_cs_precedes=1,.n_sep_by_space=2,.p_sign_posn=4,.n_sign_posn=4},.numeric={.decimal_point=tsc(U"."),.thousands_sep=tsc(U","),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(U"ອາ."),tsc(U"ຈ."),tsc(U"ຄ."),tsc(U"ພ."),tsc(U"ພຫ."),tsc(U"ສ."),tsc(U"ສ.")},.day={tsc(U"ອາທິດ"),tsc(U"ຈັນ"),tsc(U"ອັງຄານ"),tsc(U"ພຸດ"),tsc(U"ພະຫັດ"),tsc(U"ສຸກ"),tsc(U"ເສົາ")},.abmon={tsc(U"ມ.ກ."),tsc(U"ກ.ພ."),tsc(U"ມ.ນ."),tsc(U"ມ.ສ."),tsc(U"ພ.ພ."),tsc(U"ມິ.ຖ."),tsc(U"ກ.ລ."),tsc(U"ສ.ຫ."),tsc(U"ກ.ຍ."),tsc(U"ຕ.ລ."),tsc(U"ພ.ຈ."),tsc(U"ທ.ວ.")},.mon={tsc(U"ມັງກອນ"),tsc(U"ກຸມພາ"),tsc(U"ມີນາ"),tsc(U"ເມສາ"),tsc(U"ພຶດສະພາ"),tsc(U"ມິຖຸນາ"),tsc(U"ກໍລະກົດ"),tsc(U"ສິງຫາ"),tsc(U"ກັນຍາ"),tsc(U"ຕຸລາ"),tsc(U"ພະຈິກ"),tsc(U"ທັນວາ")},.d_t_fmt=tsc(U"%a %e %b %Ey, %H:%M:%S"),.d_fmt=tsc(U"%d//%m//%Ey"),.t_fmt=tsc(U"%H:%M:%S"),.t_fmt_ampm=tsc(U"%I:%M:%S %p"),.date_fmt=tsc(U"%a %e %b %Ey %H:%M:%S %Z"),.am_pm={tsc(U"AM"),tsc(U"PM")},.era={u32time_era_storage,1},.era_d_fmt=tsc(U"%e %b %Ey"),.era_d_t_fmt=tsc(U"ວັນ%Aທີ່ %e %B %EC %Ey, %H.%M.%S ນ."),.era_t_fmt=tsc(U"%H.%M.%S ນ."),.week={7,19971130,1}},.messages={.yesexpr=tsc(U"^[+1yYມ]"),.noexpr=tsc(U"^[-0nNບ]"),.yesstr=tsc(U"ແມ່ນ"),.nostr=tsc(U"ບໍ່ແມ່ນ")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(U"+%c %a %l"),.tel_dom_fmt=tsc(U"(%A)%l"),.int_select=tsc(U"001"),.int_prefix=tsc(U"856")},.name={.name_fmt=tsc(U"%d%t%g%t%m%t%f"),.name_mr=tsc(U"ທ."),.name_mrs=tsc(U"ນ.")},.address={.postal_fmt=tsc(U"%f%N%a%N%d%N%r%t%e%t%b%N%h%t%s%N%T%N%S%N%z%c%N"),.country_name=tsc(U"ລາວ"),.country_ab2=tsc(U"LA"),.country_ab3=tsc(U"LAO"),.country_num=418,.country_car=tsc(U"LAO"),.lang_name=tsc(U"ລາວ"),.lang_ab=tsc(U"lo"),.lang_term=tsc(U"lao"),.lang_lib=tsc(U"lao")},.measurement={.measurement=1}};


}
}

#include"../main.h"