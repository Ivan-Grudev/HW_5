#include <bitset>
#include <chrono>
#include <codecvt>
#include <cstddef>
#include <cstdlib>
//#include <ctime>
//#include <exception>
#include <fstream>
#include <iostream>
#include <iterator>
#include <locale>
//#include <stdexcept>
#include <string>
#include <boost/locale.hpp>
//#include <boost/locale/generator.hpp>
//#include <boost/locale/conversion.hpp>
//#include <Windows.h>

//using namespace std;
//using namespace boost::locale;

//std::string convert_wstring_to_utf8(const std::wstring & wstring)
//{
//	std::wstring_convert < std::codecvt_utf8 < wchar_t > > converter;
//	return converter.to_bytes(wstring);
//}
//
//std::string convert_locale_to_utf(const std::string & string)
//{
//	boost::locale::generator gen;
//	gen.locale_cache_enabled(true);
//
//	std::locale locale =
//		//generator(boost::locale::util::get_system_locale());
//		gen.get_system_locale();
//
//	return boost::locale::conv::to_utf < char >(string, locale);
//}

int main()
{
    system("chcp 1251");
    std::string hello = "Привет мир!";
    std::cout << hello << std::endl;

    //boost::locale::generator gen;
    //std::locale locale = gen.generate("ru_RU.cp1251");
    //std::locale locale = boost::locale::generator().generate("ru_RU.cp1251");
    //std::string s = boost::locale::conv::to_utf <char> ("hello", locale);
    std::string utf8_string =  boost::locale::conv::to_utf<char>("привет","ru_RU.cp1251");
    //std::string s = to_utf <char> (hello, locale);

    std::cout << utf8_string << std::endl;


//    convert_utf8(hello);
    //cout << convert_wstring_to_utf8(hello&) << endl;
//    cout << convert_locale_to_utf(hello) << endl;

//    convert_utf32(hello);
//    cout << hello << endl;
    return 0;
}
