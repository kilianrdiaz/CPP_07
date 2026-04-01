#include "Array.hpp"
#include <iostream>

int main()
{
    Array<int> empty;
    std::cout << "Empty Array size: " << empty.size() << std::endl << std::endl;

    Array<int> intArray(5);
    for (size_t i = 0; i < intArray.size(); i++)
        intArray[i] = i + 1;

    std::cout << "Integer Array: ";
    for (size_t i = 0; i < intArray.size(); i++)
        std::cout << intArray[i] << " ";
    std::cout << std::endl;

    Array<int> copy(intArray);
    intArray[0] = 999;
    std::cout << "Copied Array: " << copy[0] << std::endl;
    std::cout << "Original Array: " << intArray[0] << std::endl << std::endl;

    Array<int> assigned;
    assigned = intArray;
    intArray[0] = 888;
    std::cout << "Assigned Array: " << assigned[0] << std::endl;
    std::cout << "Original Array: " << intArray[0] << std::endl << std::endl;    

    Array<std::string> stringArray(3);
    stringArray[0] = "Hello";
    stringArray[1] = "World";
    stringArray[2] = "42";

    std::cout << "String Array: ";
    for (size_t i = 0; i < stringArray.size(); i++)
        std::cout << stringArray[i] << " ";
    std::cout << std::endl;

    try
    {
        std::cout << intArray[10] << std::endl; // This should throw an exception
    }
    catch (const std::out_of_range &e)
    {
        std::cerr << "Caught exception: " << e.what() << std::endl;
    }

    return 0;
}