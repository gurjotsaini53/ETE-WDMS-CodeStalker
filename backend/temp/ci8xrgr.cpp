./temp/3j7xrsi.cpp: In function 'int main()':
./temp/3j7xrsi.cpp:5:17: error: no match for 'operator<<' (operand types are 'std::basic_ostream<char>' and '<unresolved overloaded function type>')
    cout<<"singh"<<end;
    ~~~~~~~~~~~~~^~~~~
In file included from c:\mingw\lib\gcc\mingw32\6.3.0\include\c++\iostream:39:0,
                 from ./temp/3j7xrsi.cpp:1:
c:\mingw\lib\gcc\mingw32\6.3.0\include\c++\ostream:108:7: note: candidate: std::basic_ostream<_CharT, _Traits>::__ostream_type& std::basic_ostream<_CharT, _Traits>::operator<<(std::basic_ostream<_CharT, _Traits>::__ostream_type& (*)(std::basic_ostream<_CharT, _Traits>::__ostream_type&)) [with _CharT = char; _Traits = std::char_traits<char>; std::basic_ostream<_CharT, _Traits>::__ostream_type = std::basic_ostream<char>]
       operator<<(__ostream_type& (*__pf)(__ostream_type&))
       ^~~~~~~~
c:\mingw\lib\gcc\mingw32\6.3.0\include\c++\ostream:108:7: note:   no known conversion for argument 1 from '<unresolved overloaded function type>' to 'std::basic_ostream<char>::__ostream_type& (*)(std::basic_ostream<char>::__ostream_type&) {aka std::basic_ostream<char>& (*)(std::basic_ostream<char>&)}'
c:\mingw\lib\gcc\mingw32\6.3.0\include\c++\ostream:117:7: note: candidate: std::basic_ostream<_CharT, _Traits>::__ostream_type& std::basic_ostream<_CharT, _Traits>::operator<<(std::basic_ostream<_CharT, _Traits>::__ios_type& (*)(std::basic_ostream<_CharT, _Traits>::__ios_type&)) [with _CharT = char; _Traits = std::char_traits<char>; std::basic_ostream<_CharT, _Traits>::__ostream_type = std::basic_ostream<char>; std::basic_ostream<_CharT, _Traits>::__ios_type = std::basic_ios<char>]
       operator<<(__ios_type& (*__pf)(__ios_type&))
       ^~~~~~~~
c:\mingw\lib\gcc\mingw32\6.3.0\include\c++\ostream:117:7: note:   no known conversion for argument 1 from '<unresolved overloaded function type>' to 'std::basic_ostream<char>::__ios_type& (*)(std::basic_ostream<char>::__ios_type&) {aka std::basic_ios<char>& (*)(std::basic_ios<char>&)}'
c:\mingw\lib\gcc\mingw32\6.3.0\include\c++\ostream:127:7: note: candidate: std::basic_ostream<_CharT, _Traits>::__ostream_type& std::basic_ostream<_CharT, _Traits>::operator<<(std::ios_base& (*)(std::ios_base&)) [with _CharT = char; _Traits = std::char_traits<char>; std::basic_ostream<_CharT, _Traits>::__ostream_type = std::basic_ostream<char>]
       operator<<(ios_base& (*__pf) (ios_base&))
       ^~~~~~~~
c:\mingw\lib\gcc\mingw32\6.3.0\include\c++\ostream:127:7: note:   no known conversion for argument 1 from '<unresolved overloaded function type>' to 'std::ios_base& (*)(std::ios_base&)'
c:\mingw\lib\gcc\mingw32\6.3.0\include\c++\ostream:166:7: note: candidate: std::basic_ostream<_CharT, _Traits>::__ostream_type& std::basic_ostream<_CharT, _Traits>::operator<<(long int) [with _CharT = char; _Traits = std::char_traits<char>; std::basic_ostream<_CharT, _Traits>::__ostream_type = std::basic_ostream<char>]
       operator<<(long __n)
       ^~~~~~~~
c:\mingw\lib\gcc\mingw32\6.3.0\include\c++\ostream:166:7: note:   no known conversion for argument 1 from '<unresolved overloaded function type>' to 'long int'
c:\mingw\lib\gcc\mingw32\6.3.0\include\c++\ostream:170:7: note: candidate: std::basic_ostream<_CharT, _Traits>::__ostream_type& std::basic_ostream<_CharT, _Traits>::operator<<(long unsigned int) [with _CharT = char; _Traits = std::char_traits<char>; std::basic_ostream<_CharT, _Traits>::__ostream_type = std::basic_ostream<char>]
       operator<<(unsigned long __n)
       ^~~~~~~~
c:\mingw\lib\gcc\mingw32\6.3.0\include\c++\ostream:170:7: note:   no known conversion for argument 1 from '<unresolved overloaded function type>' to 'long unsigned int'
c:\mingw\lib\gcc\mingw32\6.3.0\include\c++\ostream:174:7: note: candidate: std::basic_ostream<_CharT, _Traits>::__ostream_type& std::basic_ostream<_CharT, _Traits>::operator<<(bool) [with _CharT = char; _Traits = std::char_traits<char>; std::basic_ostream<_CharT, _Traits>::__ostream_type = std::basic_ostream<char>]
       operator<<(bool __n)
       ^~~~~~~~
c:\mingw\lib\gcc\mingw32\6.3.0\include\c++\ostream:174:7: note:   no known conversion for argument 1 from '<unresolved overloaded function type>' to 'bool'
In file included from c:\mingw\lib\gcc\mingw32\6.3.0\include\c++\ostream:638:0,
                 from c:\mingw\lib\gcc\mingw32\6.3.0\include\c++\iostream:39,
                 from ./temp/3j7xrsi.cpp:1:
c:\mingw\lib\gcc\mingw32\6.3.0\include\c++\bits\ostream.tcc:91:5: note: candidate: std::basic_ostream<_CharT, _Traits>& std::basic_ostream<_CharT, _Traits>::operator<<(short int) [with _CharT = char; _Traits = std::char_traits<char>]
     basic_ostream<_CharT, _Traits>::
     ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
c:\mingw\lib\gcc\mingw32\6.3.0\include\c++\bits\ostream.tcc:91:5: note:   no known conversion for argument 1 from '<unresolved overloaded function type>' to 'short int'
In file included from c:\mingw\lib\gcc\mingw32\6.3.0\include\c++\iostream:39:0,
                 from ./temp/3j7xrsi.cpp:1:
c:\mingw\lib\gcc\mingw32\6.3.0\include\c++\ostream:181:7: note: candidate: std::basic_ostream<_CharT, _Traits>::__ostream_type& std::basic_ostream<_CharT, _Traits>::operator<<(short unsigned int) [with _CharT = char; _Traits = std::char_traits<char>; std::basic_ostream<_CharT, _Traits>::__ostream_type = std::basic_ostream<char>]
       operator<<(unsigned short __n)
       ^~~~~~~~
c:\mingw\lib\gcc\mingw32\6.3.0\include\c++\ostream:181:7: note:   no known conversion for argument 1 from '<unresolved overloaded function type>' to 'short unsigned int'
In file included from c:\mingw\lib\gcc\mingw32\6.3.0\include\c++\ostream:638:0,
                 from c:\mingw\lib\gcc\mingw32\6.3.0\include\c++\iostream:39,
                 from ./temp/3j7xrsi.cpp:1:
c:\mingw\lib\gcc\mingw32\6.3.0\include\c++\bits\ostream.tcc:105:5: note: candidate: std::basic_ostream<_CharT, _Traits>& std::basic_ostream<_CharT, _Traits>::operator<<(int) [with _CharT = char; _Traits = std::char_traits<char>]
     basic_ostream<_CharT, _Traits>::
     ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
c:\mingw\lib\gcc\mingw32\6.3.0\include\c++\bits\ostream.tcc:105:5: note:   no known conversion for argument 1 from '<unresolved overloaded function type>' to 'int'
In file included from c:\mingw\lib\gcc\mingw32\6.3.0\include\c++\iostream:39:0,
                 from ./temp/3j7xrsi.cpp:1:
c:\mingw\lib\gcc\mingw32\6.3.0\include\c++\ostream:192:7: note: candidate: std::basic_ostream<_CharT, _Traits>::__ostream_type& std::basic_ostream<_CharT, _Traits>::operator<<(unsigned int) [with _CharT = char; _Traits = std::char_traits<char>; std::basic_ostream<_CharT, _Traits>::__ostream_type = std::basic_ostream<char>]
       operator<<(unsigned int __n)
       ^~~~~~~~
c:\mingw\lib\gcc\mingw32\6.3.0\include\c++\ostream:192:7: note:   no known conversion for argument 1 from '<unresolved overloaded function type>' to 'unsigned int'
c:\mingw\lib\gcc\mingw32\6.3.0\include\c++\ostream:201:7: note: candidate: std::basic_ostream<_CharT, _Traits>::__ostream_type& std::basic_ostream<_CharT, _Traits>::operator<<(long long int) [with _CharT = char; _Traits = std::char_traits<char>; std::basic_ostream<_CharT, _Traits>::__ostream_type = std::basic_ostream<char>]
       operator<<(long long __n)
       ^~~~~~~~
c:\mingw\lib\gcc\mingw32\6.3.0\include\c++\ostream:201:7: note:   no known conversion for argument 1 from '<unresolved overloaded function type>' to 'long long int'
c:\mingw\lib\gcc\mingw32\6.3.0\include\c++\ostream:205:7: note: candidate: std::basic_ostream<_CharT, _Traits>::__ostream_type& std::basic_ostream<_CharT, _Traits>::operator<<(long long unsigned int) [with _CharT = char; _Traits = std::char_traits<char>; std::basic_ostream<_CharT, _Traits>::__ostream_type = std::basic_ostream<char>]
       operator<<(unsigned long long __n)
       ^~~~~~~~
c:\mingw\lib\gcc\mingw32\6.3.0\include\c++\ostream:205:7: note:   no known conversion for argument 1 from '<unresolved overloaded function type>' to 'long long unsigned int'
c:\mingw\lib\gcc\mingw32\6.3.0\include\c++\ostream:220:7: note: candidate: std::basic_ostream<_CharT, _Traits>::__ostream_type& std::basic_ostream<_CharT, _Traits>::operator<<(double) [with _CharT = char; _Traits = std::char_traits<char>; std::basic_ostream<_CharT, _Traits>::__ostream_type = std::basic_ostream<char>]
       operator<<(double __f)
       ^~~~~~~~
c:\mingw\lib\gcc\mingw32\6.3.0\include\c++\ostream:220:7: note:   no known conversion for argument 1 from '<unresolved overloaded function type>' to 'double'
c:\mingw\lib\gcc\mingw32\6.3.0\include\c++\ostream:224:7: note: candidate: std::basic_ostream<_CharT, _Traits>::__ostream_type& std::basic_ostream<_CharT, _Traits>::operator<<(float) [with _CharT = char; _Traits = std::char_traits<char>; std::basic_ostream<_CharT, _Traits>::__ostream_type = std::basic_ostream<char>]
       operator<<(float __f)
       ^~~~~~~~
c:\mingw\lib\gcc\mingw32\6.3.0\include\c++\ostream:224:7: note:   no known conversion for argument 1 from '<unresolved overloaded function type>' to 'float'
c:\mingw\lib\gcc\mingw32\6.3.0\include\c++\ostream:232:7: note: candidate: std::basic_ostream<_CharT, _Traits>::__ostream_type& std::basic_ostream<_CharT, _Traits>::operator<<(long double) [with _CharT = char; _Traits = std::char_traits<char>; std::basic_ostream<_CharT, _Traits>::__ostream_type = std::basic_ostream<char>]
       operator<<(long double __f)
       ^~~~~~~~
c:\mingw\lib\gcc\mingw32\6.3.0\include\c++\ostream:232:7: note:   no known conversion for argument 1 from '<unresolved overloaded function type>' to 'long double'
c:\mingw\lib\gcc\mingw32\6.3.0\include\c++\ostream:245:7: note: candidate: std::basic_ostream<_CharT, _Traits>::__ostream_type& std::basic_ostream<_CharT, _Traits>::operator<<(const void*) [with _CharT = char; _Traits = std::char_traits<char>; std::basic_ostream<_CharT, _Traits>::__ostream_type = std::basic_ostream<char>]
       operator<<(const void* __p)
       ^~~~~~~~
c:\mingw\lib\gcc\mingw32\6.3.0\include\c++\ostream:245:7: note:   no known conversion for argument 1 from '<unresolved overloaded function type>' to 'const void*'
In file included from c:\mingw\lib\gcc\mingw32\6.3.0\include\c++\ostream:638:0,
                 from c:\mingw\lib\gcc\mingw32\6.3.0\include\c++\iostream:39,
                 from ./temp/3j7xrsi.cpp:1:
c:\mingw\lib\gcc\mingw32\6.3.0\include\c++\bits\ostream.tcc:119:5: note: candidate: std::basic_ostream<_CharT, _Traits>& std::basic_ostream<_CharT, _Traits>::operator<<(std::basic_ostream<_CharT, _Traits>::__streambuf_type*) [with _CharT = char; _Traits = std::char_traits<char>; std::basic_ostream<_CharT, _Traits>::__streambuf_type = std::basic_streambuf<char>]
     basic_ostream<_CharT, _Traits>::
     ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
c:\mingw\lib\gcc\mingw32\6.3.0\include\c++\bits\ostream.tcc:119:5: note:   no known conversion for argument 1 from '<unresolved overloaded function type>' to 'std::basic_ostream<char>::__streambuf_type* {aka std::basic_streambuf<char>*}'
In file included from c:\mingw\lib\gcc\mingw32\6.3.0\include\c++\string:52:0,
                 from c:\mingw\lib\gcc\mingw32\6.3.0\include\c++\bits\locale_classes.h:40,
                 from c:\mingw\lib\gcc\mingw32\6.3.0\include\c++\bits\ios_base.h:41,
                 from c:\mingw\lib\gcc\mingw32\6.3.0\include\c++\ios:42,
                 from c:\mingw\lib\gcc\mingw32\6.3.0\include\c++\ostream:38,
                 from c:\mingw\lib\gcc\mingw32\6.3.0\include\c++\iostream:39,
                 from ./temp/3j7xrsi.cpp:1:
c:\mingw\lib\gcc\mingw32\6.3.0\include\c++\bits\basic_string.h:5325:5: note: candidate: template<class _CharT, class _Traits, class _Alloc> std::basic_ostream<_CharT, _Traits>& std::operator<<(std::basic_ostream<_CharT, _Traits>&, const std::__cxx11::basic_string<_CharT, _Traits, _Alloc>&)
     operator<<(basic_ostream<_CharT, _Traits>& __os,
     ^~~~~~~~
c:\mingw\lib\gcc\mingw32\6.3.0\include\c++\bits\basic_string.h:5325:5: note:   template argument deduction/substitution failed:
./temp/3j7xrsi.cpp:5:19: note:   couldn't deduce template parameter '_Alloc'
    cout<<"singh"<<end;
                   ^~~
In file included from c:\mingw\lib\gcc\mingw32\6.3.0\include\c++\bits\ios_base.h:46:0,
                 from c:\mingw\lib\gcc\mingw32\6.3.0\include\c++\ios:42,
                 from c:\mingw\lib\gcc\mingw32\6.3.0\include\c++\ostream:38,
                 from c:\mingw\lib\gcc\mingw32\6.3.0\include\c++\iostream:39,
                 from ./temp/3j7xrsi.cpp:1:
c:\mingw\lib\gcc\mingw32\6.3.0\include\c++\system_error:209:5: note: candidate: template<class _CharT, class _Traits> std::basic_ostream<_CharT, _Traits>& std::operator<<(std::basic_ostream<_CharT, _Traits>&, const std::error_code&)
     operator<<(basic_ostream<_CharT, _Traits>& __os, const error_code& __e)
     ^~~~~~~~
c:\mingw\lib\gcc\mingw32\6.3.0\include\c++\system_error:209:5: note:   template argument deduction/substitution failed:
./temp/3j7xrsi.cpp:5:19: note:   cannot convert 'std::end' (type '<unresolved overloaded function type>') to type 'const std::error_code&'
    cout<<"singh"<<end;
                   ^~~
In file included from c:\mingw\lib\gcc\mingw32\6.3.0\include\c++\iostream:39:0,
                 from ./temp/3j7xrsi.cpp:1:
c:\mingw\lib\gcc\mingw32\6.3.0\include\c++\ostream:497:5: note: candidate: std::basic_ostream<_CharT, _Traits>& std::operator<<(std::basic_ostream<_CharT, _Traits>&, _CharT) [with _CharT = char; _Traits = std::char_traits<char>]
     operator<<(basic_ostream<_CharT, _Traits>& __out, _CharT __c)
     ^~~~~~~~
c:\mingw\lib\gcc\mingw32\6.3.0\include\c++\ostream:497:5: note:   no known conversion for argument 2 from '<unresolved overloaded function type>' to 'char'
c:\mingw\lib\gcc\mingw32\6.3.0\include\c++\ostream:502:5: note: candidate: template<class _CharT, class _Traits> std::basic_ostream<_CharT, _Traits>& std::operator<<(std::basic_ostream<_CharT, _Traits>&, char)
     operator<<(basic_ostream<_CharT, _Traits>& __out, char __c)
     ^~~~~~~~
c:\mingw\lib\gcc\mingw32\6.3.0\include\c++\ostream:502:5: note:   template argument deduction/substitution failed:
./temp/3j7xrsi.cpp:5:19: note:   cannot convert 'std::end' (type '<unresolved overloaded function type>') to type 'char'
    cout<<"singh"<<end;
                   ^~~
In file included from c:\mingw\lib\gcc\mingw32\6.3.0\include\c++\iostream:39:0,
                 from ./temp/3j7xrsi.cpp:1:
c:\mingw\lib\gcc\mingw32\6.3.0\include\c++\ostream:508:5: note: candidate: template<class _Traits> std::basic_ostream<char, _Traits>& std::operator<<(std::basic_ostream<char, _Traits>&, char)
     operator<<(basic_ostream<char, _Traits>& __out, char __c)
     ^~~~~~~~
c:\mingw\lib\gcc\mingw32\6.3.0\include\c++\ostream:508:5: note:   template argument deduction/substitution failed:
./temp/3j7xrsi.cpp:5:19: note:   cannot convert 'std::end' (type '<unresolved overloaded function type>') to type 'char'
    cout<<"singh"<<end;
                   ^~~
In file included from c:\mingw\lib\gcc\mingw32\6.3.0\include\c++\iostream:39:0,
                 from ./temp/3j7xrsi.cpp:1:
c:\mingw\lib\gcc\mingw32\6.3.0\include\c++\ostream:514:5: note: candidate: template<class _Traits> std::basic_ostream<char, _Traits>& std::operator<<(std::basic_ostream<char, _Traits>&, signed char)
     operator<<(basic_ostream<char, _Traits>& __out, signed char __c)
     ^~~~~~~~
c:\mingw\lib\gcc\mingw32\6.3.0\include\c++\ostream:514:5: note:   template argument deduction/substitution failed:
./temp/3j7xrsi.cpp:5:19: note:   cannot convert 'std::end' (type '<unresolved overloaded function type>') to type 'signed char'
    cout<<"singh"<<end;
                   ^~~
In file included from c:\mingw\lib\gcc\mingw32\6.3.0\include\c++\iostream:39:0,
                 from ./temp/3j7xrsi.cpp:1:
c:\mingw\lib\gcc\mingw32\6.3.0\include\c++\ostream:519:5: note: candidate: template<class _Traits> std::basic_ostream<char, _Traits>& std::operator<<(std::basic_ostream<char, _Traits>&, unsigned char)
     operator<<(basic_ostream<char, _Traits>& __out, unsigned char __c)
     ^~~~~~~~
c:\mingw\lib\gcc\mingw32\6.3.0\include\c++\ostream:519:5: note:   template argument deduction/substitution failed:
./temp/3j7xrsi.cpp:5:19: note:   cannot convert 'std::end' (type '<unresolved overloaded function type>') to type 'unsigned char'
    cout<<"singh"<<end;
                   ^~~
In file included from c:\mingw\lib\gcc\mingw32\6.3.0\include\c++\iostream:39:0,
                 from ./temp/3j7xrsi.cpp:1:
c:\mingw\lib\gcc\mingw32\6.3.0\include\c++\ostream:539:5: note: candidate: std::basic_ostream<_CharT, _Traits>& std::operator<<(std::basic_ostream<_CharT, _Traits>&, const _CharT*) [with _CharT = char; _Traits = std::char_traits<char>]
     operator<<(basic_ostream<_CharT, _Traits>& __out, const _CharT* __s)
     ^~~~~~~~
c:\mingw\lib\gcc\mingw32\6.3.0\include\c++\ostream:539:5: note:   no known conversion for argument 2 from '<unresolved overloaded function type>' to 'const char*'
In file included from c:\mingw\lib\gcc\mingw32\6.3.0\include\c++\ostream:638:0,
                 from c:\mingw\lib\gcc\mingw32\6.3.0\include\c++\iostream:39,
                 from ./temp/3j7xrsi.cpp:1:
c:\mingw\lib\gcc\mingw32\6.3.0\include\c++\bits\ostream.tcc:321:5: note: candidate: template<class _CharT, class _Traits> std::basic_ostream<_CharT, _Traits>& std::operator<<(std::basic_ostream<_CharT, _Traits>&, const char*)
     operator<<(basic_ostream<_CharT, _Traits>& __out, const char* __s)
     ^~~~~~~~
c:\mingw\lib\gcc\mingw32\6.3.0\include\c++\bits\ostream.tcc:321:5: note:   template argument deduction/substitution failed:
./temp/3j7xrsi.cpp:5:19: note:   cannot convert 'std::end' (type '<unresolved overloaded function type>') to type 'const char*'
    cout<<"singh"<<end;
                   ^~~
In file included from c:\mingw\lib\gcc\mingw32\6.3.0\include\c++\iostream:39:0,
                 from ./temp/3j7xrsi.cpp:1:
c:\mingw\lib\gcc\mingw32\6.3.0\include\c++\ostream:556:5: note: candidate: template<class _Traits> std::basic_ostream<char, _Traits>& std::operator<<(std::basic_ostream<char, _Traits>&, const char*)
     operator<<(basic_ostream<char, _Traits>& __out, const char* __s)
     ^~~~~~~~
c:\mingw\lib\gcc\mingw32\6.3.0\include\c++\ostream:556:5: note:   template argument deduction/substitution failed:
./temp/3j7xrsi.cpp:5:19: note:   cannot convert 'std::end' (type '<unresolved overloaded function type>') to type 'const char*'
    cout<<"singh"<<end;
                   ^~~
In file included from c:\mingw\lib\gcc\mingw32\6.3.0\include\c++\iostream:39:0,
                 from ./temp/3j7xrsi.cpp:1:
c:\mingw\lib\gcc\mingw32\6.3.0\include\c++\ostream:569:5: note: candidate: template<class _Traits> std::basic_ostream<char, _Traits>& std::operator<<(std::basic_ostream<char, _Traits>&, const signed char*)
     operator<<(basic_ostream<char, _Traits>& __out, const signed char* __s)
     ^~~~~~~~
c:\mingw\lib\gcc\mingw32\6.3.0\include\c++\ostream:569:5: note:   template argument deduction/substitution failed:
./temp/3j7xrsi.cpp:5:19: note:   cannot convert 'std::end' (type '<unresolved overloaded function type>') to type 'const signed char*'
    cout<<"singh"<<end;
                   ^~~
In file included from c:\mingw\lib\gcc\mingw32\6.3.0\include\c++\iostream:39:0,
                 from ./temp/3j7xrsi.cpp:1:
c:\mingw\lib\gcc\mingw32\6.3.0\include\c++\ostream:574:5: note: candidate: template<class _Traits> std::basic_ostream<char, _Traits>& std::operator<<(std::basic_ostream<char, _Traits>&, const unsigned char*)
     operator<<(basic_ostream<char, _Traits>& __out, const unsigned char* __s)
     ^~~~~~~~
c:\mingw\lib\gcc\mingw32\6.3.0\include\c++\ostream:574:5: note:   template argument deduction/substitution failed:
./temp/3j7xrsi.cpp:5:19: note:   cannot convert 'std::end' (type '<unresolved overloaded function type>') to type 'const unsigned char*'
    cout<<"singh"<<end;
                   ^~~
In file included from c:\mingw\lib\gcc\mingw32\6.3.0\include\c++\iostream:39:0,
                 from ./temp/3j7xrsi.cpp:1:
c:\mingw\lib\gcc\mingw32\6.3.0\include\c++\ostream:628:5: note: candidate: template<class _CharT, class _Traits, class _Tp> std::basic_ostream<_CharT, _Traits>& std::operator<<(std::basic_ostream<_CharT, _Traits>&&, const _Tp&)
     operator<<(basic_ostream<_CharT, _Traits>&& __os, const _Tp& __x)
     ^~~~~~~~
c:\mingw\lib\gcc\mingw32\6.3.0\include\c++\ostream:628:5: note:   template argument deduction/substitution failed:
./temp/3j7xrsi.cpp:5:19: note:   couldn't deduce template parameter '_Tp'
    cout<<"singh"<<end;
                   ^~~
