#include <iostream>

using std::cout;
using std::endl;

int main()
{
    // integer types
    cout << "short : " << sizeof(short) << endl;
    cout << "int : " << sizeof(int) << endl;
    cout << "long : " << sizeof(long) << endl;
    cout << "long long : " << sizeof(long long) << endl; 
    cout << endl;  

    // unsigned types
    cout << "unsigned short : " << sizeof(unsigned short) << endl;
    cout << "unsigned int : " << sizeof(unsigned) << endl;
    cout << "unsigned long : " << sizeof(unsigned long) << endl;
    cout << "unsigned long long : " << sizeof(unsigned long long) << endl;
    cout << endl;

    // char types
    cout << "char : " << sizeof(char) << endl;
    cout << "wchar_t : " << sizeof(wchar_t) << endl;
    cout << "char16_t : " << sizeof(char16_t) << endl;
    cout << "char32_t : " << sizeof(char32_t) << endl;
    cout << endl;

    // floating point types
    cout << "float : " << sizeof(float) << endl; 
    cout << "double : " << sizeof(double) << endl;
    cout << "long double : " << sizeof(long double) << endl;
    cout << endl;

    // bool types
    cout << "bool : " << sizeof(bool) << endl;
    cout << endl;

    // Fixed width integers
    cout << "int8_t : " << sizeof(int8_t)  << endl;
    cout << "uint8_t : " << sizeof(uint8_t)  << endl;
    cout << "int16_t : " << sizeof(int16_t)  << endl;
    cout << "uint16_t : " << sizeof(uint16_t)  << endl;
    cout << "int32_t : " << sizeof(int32_t)  << endl;
    cout << "uint32_t : " << sizeof(uint32_t)  << endl;
    cout << "int64_t : " << sizeof(int64_t)  << endl;
    cout << "uint64_t : " << sizeof(uint64_t)  << endl;
    cout << endl;

    return 0;
}