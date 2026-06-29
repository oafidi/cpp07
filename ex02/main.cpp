#include "Array.hpp"
#include <iostream>

int main()
{

    std::cout << "===== DEFAULT CONSTRUCTOR =====" << std::endl;
    Array<int> empty;
    std::cout << "Size: " << empty.size() << std::endl;

    try
    {
        std::cout << "\n===== PARAMETERIZED CONSTRUCTOR =====" << std::endl;

        Array<int> numbers(5);

        for (unsigned int i = 0; i < numbers.size(); i++)
            numbers[i] = i * 10;

        for (unsigned int i = 0; i < numbers.size(); i++)
            std::cout << numbers[i] << " ";
        std::cout << std::endl;

        std::cout << "\n===== COPY CONSTRUCTOR =====" << std::endl;

        Array<int> copy(numbers);

        copy[0] = 999;

        std::cout << "Original: ";
        for (unsigned int i = 0; i < numbers.size(); i++)
            std::cout << numbers[i] << " ";
        std::cout << std::endl;

        std::cout << "Copy:     ";
        for (unsigned int i = 0; i < copy.size(); i++)
            std::cout << copy[i] << " ";
        std::cout << std::endl;

        std::cout << "\n===== COPY ASSIGNMENT =====" << std::endl;

        Array<int> assigned;
        assigned = numbers;

        assigned[1] = 777;

        std::cout << "Original: ";
        for (unsigned int i = 0; i < numbers.size(); i++)
            std::cout << numbers[i] << " ";
        std::cout << std::endl;

        std::cout << "Assigned: ";
        for (unsigned int i = 0; i < assigned.size(); i++)
            std::cout << assigned[i] << " ";
        std::cout << std::endl;

        std::cout << "\n===== SELF ASSIGNMENT =====" << std::endl;

        numbers = numbers;

        for (unsigned int i = 0; i < numbers.size(); i++)
            std::cout << numbers[i] << " ";
        std::cout << std::endl;

        std::cout << "\n===== OUT OF BOUNDS =====" << std::endl;

        try
        {
            std::cout << numbers[100] << std::endl;
        }
        catch (const std::exception &e)
        {
            std::cout << "Exception caught: "
                      << e.what() << std::endl;
        }

        try
        {
            std::cout << numbers[-1] << std::endl;
        }
        catch (const std::exception &e)
        {
            std::cout << "Exception caught: "
                      << e.what() << std::endl;
        }
    }
    catch (const std::exception &e)
    {
        std::cout << "Exception: "
                  << e.what() << std::endl;
    }

    try
    {
        std::cout << "\n===== STRING ARRAY =====" << std::endl;

        Array<std::string> words(3);

        words[0] = "Hello";
        words[1] = "World";
        words[2] = "!";

        for (unsigned int i = 0; i < words.size(); i++)
            std::cout << words[i] << " ";
        std::cout << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << "Exception: "
                  << e.what() << std::endl;
    }

    return 0;
}