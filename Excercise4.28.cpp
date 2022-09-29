#include <iostream>
#include <string>
#include <vector>
int main()
{
    std::cout << "size of built-in type:" << std::endl;
    std::cout << "bool: " << sizeof(bool) << std::endl
         << "char: " << sizeof(char) << std::endl
         << "wchar_t: " << sizeof(wchar_t) << std::endl
         << "char16_t: " << sizeof(char16_t) << std::endl
         << "char32_t: " << sizeof(char32_t) << std::endl
         << "short: " << sizeof(short) << std::endl
         << "int: " << sizeof(long) << std::endl
         << "long: " << sizeof(long) << std::endl
         << "long long: " << sizeof(long long) << std::endl
         << "float: " << sizeof(float) << std::endl
         << "double: " << sizeof(double) << std::endl
         << "long double: " << sizeof(long double) << std::endl
         << "int pointer: " << sizeof(int*) << std::endl;
    return 0;
}