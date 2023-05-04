#include <iostream>

void printDouble(double d)
{
    std::cout << d << '\n';
}



void printInt(int x)
{
    std::cout << x << '\n';
}


int main()
{   
    printDouble(5.0); // no conversion necessary
    printDouble(4.0f); // numeric promotion of float to double

    return 0;
}