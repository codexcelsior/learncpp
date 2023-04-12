#include <iostream>

// void value; // won't work, variables can't be defined with a void type

void writeValue(int x) // void here means no return value
{
    std::cout << "The value of x is: " << x << '\n';
    // no return statement, because this function doesn't return a value
}

void noReturn(int x) // void here means no return value
{
    // return 5; // error
}


int getValue(void) // void here means no parameters
{
    int x{};
    std::cin >> x;
    return x;
}

int getValue1() // empty function parameters is an implicit void
{
    int x{};
    std::cin >> x;
    return x;
}