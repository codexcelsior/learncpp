#include <iostream>
#include "add.h"
// #include "add.cpp" //The program cannot see full definition of this 


template <typename T>
T addOne(T x); // function template forward declaration



int main()
{

    std::cout << addOne(1) << '\n';
    std::cout << addOne(2.3) << '\n';

    return 0;
}

