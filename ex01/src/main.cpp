#include "iter.hpp"
#include <iostream>

template <typename T>
void print(T const &elem)
{
    std::cout << elem << std::endl;
}

void printInt(const int &i)
{
    std::cout << i << std::endl;
}

void printFloat(float &f)
{
    std::cout << f << std::endl;
}

void printString(std::string &s)
{
    std::cout << s << std::endl;
}

void printChar(char &c)
{
    std::cout << c << std::endl;
}

int main(void)
{
    const int intArray[] = {1, 2, 3, 4, 5};
    float floatArray[] = {1.1f, 2.2f, 3.3f, 4.4f, 5.5f};
    std::string stringArray[] = {"Hello", "World", "42", "CPP", "Templates"};
    char charArray[] = {'H', 'e', 'l', 'l', 'o'};

    std::cout << "Using specific print functions:" << std::endl;
    iter(intArray, 5, printInt);
    iter(floatArray, 5, printFloat);
    iter(stringArray, 5, printString);
    iter(charArray, 5, printChar);

    std::cout << "\nUsing template print function:" << std::endl;
    iter(intArray, 5, print<int>);
    iter(floatArray, 5, print<float>);
    iter(stringArray, 5, print<std::string>);
    iter(charArray, 5, print<char>);


    int *a = new int();

    iter(a, 5, printInt);

    return (0);
}