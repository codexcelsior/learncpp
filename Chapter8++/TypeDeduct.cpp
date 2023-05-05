#include <iostream>

int add(int x, int y)
{
    return x + y;
}


int main()
{
    auto d1{ 5.0 }; // 5.0 is a double literal, so d will be type double
    auto i{ 1 + 2 }; // 1 + 2 evaluates to an int, so i will be type int
    auto x { i }; // i is an int, so x will be type int too

    auto sum { add(5, 6) }; // add() returns an int, so sum's type will be deduced to int


    const int x1 { 5 }; // x has type const int
    auto y { x1 };      // y will be type int (const is dropped)

    auto s { "Hello, world" }; // s will be type const char*, not std::string

    //Benefits of using Type Dedct

    // harder to read
    int a { 5 };
    double b { 6.7 };

    // easier to read
    auto c { 5 };
    auto d { 6.7 };

    


    return 0;
}