
#include <iostream>

float f{ 3 }; // initialize floating point variable with int 3
double d{ 3 }; // int value 3 implicitly converted to type double
// d = 6; // int value 6 implicitly converted to type double

double division{ 4.0 / 3 }; // int value 3 implicitly converted to type double

// if (5) // int value 5 implicitly converted to type bool
// {
// }


void doSomething(long l)
{
    std::cout << "Enter";
}


int main()
{
    doSomething(3); // int value 3 implicitly converted to type long
}