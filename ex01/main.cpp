#include "iter.hpp"
#include <iostream>
#include <string>
#include <cctype>

void add(int &i)
{
    i += 1;
}

void capitalize(std::string &str)
{
    if (!str.empty())
        str[0] = static_cast<char>(std::toupper(str[0]));
}

void printInt(const int &i)
{
    std::cout << i << " ";
}

void printString(const std::string &str)
{
    std::cout << str << " ";
}

int main()
{
    std::cout << "===== INT ARRAY =====" << std::endl;

    int int_arr[] = {1, 2, 3};

    std::cout << "Before: ";
    for (int i = 0; i < 3; i++)
        std::cout << int_arr[i] << " ";
    std::cout << std::endl;

    iter(int_arr, 3, add);

    std::cout << "After : ";
    for (int i = 0; i < 3; i++)
        std::cout << int_arr[i] << " ";
    std::cout << std::endl;

    std::cout << std::endl;

    std::cout << "===== STRING ARRAY =====" << std::endl;

    std::string str_arr[] = {"hello", "world", "!", ""};

    std::cout << "Before: ";
    for (int i = 0; i < 4; i++)
        std::cout << str_arr[i] << " ";
    std::cout << std::endl;

    iter(str_arr, 4, capitalize);

    std::cout << "After : ";
    for (int i = 0; i < 4; i++)
        std::cout << str_arr[i] << " ";
    std::cout << std::endl;

    std::cout << std::endl;

    std::cout << "===== CONST INT ARRAY =====" << std::endl;

    const int const_int_arr[] = {10, 20, 30};

    std::cout << "Values: ";
    iter(const_int_arr, 3, printInt);
    std::cout << std::endl;

    std::cout << std::endl;

    std::cout << "===== CONST STRING ARRAY =====" << std::endl;

    const std::string const_str_arr[] = {"how", "much", "pass"};

    std::cout << "Values: ";
    iter(const_str_arr, 3, printString);
    std::cout << std::endl;

    // iter(const_int_arr, 3, add);

    return 0;
}