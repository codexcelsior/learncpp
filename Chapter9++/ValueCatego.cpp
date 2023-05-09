#include <iostream>

void print(int x)
{
    std::cout << x << '\n';
}

int return5()
{
    return 5;
}

int main()
{
    auto v1 { 12 / 4 }; //Type of the expression = Type of value:  int / int => int
    auto v2 { 12.0 / 4 }; //Type of the expression = Type of value double / int => double

    // print("foo"); // error: print() was expecting an int argument, we tried to pass in a string literal


    int x {5}; //5 is a rvalue
    int y {x}; //x is an lvalue expression

    const double d{}; //d is a rvalue
    const double e { d }; // d is a non-modifiable lvalue expression


    int z { return5() }; // return5() is an rvalue expression (since the result is returned by value)

    int w { x + 1 }; // x + 1 is an rvalue expression
    int q { static_cast<int>(d) }; // the result of static casting d to an int is an rvalue expression


    x = y; // y is a modifiable lvalue, not an rvalue, but this is legal

    


    return 0;
}