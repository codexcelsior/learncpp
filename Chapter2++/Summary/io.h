#include <iostream>

#ifndef READ_NUMBER
#define READ_NUMBER

int readNumber()
{
    int num;
    std::cout << "Enter an integer: ";
    std::cin >> num;
    return num;
}

#endif