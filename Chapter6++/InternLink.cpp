#include <iostream>

static int g_x{};

const int g_y{};

constexpr int g_z{ 2 };

// // Internal global variables definitions:
// static int g_x;          // defines non-initialized internal global variable (zero initialized by default)
// static int g_x{ 1 };     // defines initialized internal global variable

// const int g_y { 2 };     // defines initialized internal global const variable
// constexpr int g_y { 3 }; // defines initialized internal global constexpr variable

// // Internal function definitions:
// static int foo() {};     // defines internal function

[[maybe_unused]] static int add(int x, int y)
{
    return x + y;
} //if static int add is on another file, it won't work 


int add(int x, int y); // forward declaration for function add will work


int main()
{
    std::cout << g_x << ' ' << g_y << ' ' << g_z << "\n";

    [[maybe_unused]] constexpr int g_x { 2 }; // this internal g_x is only accessible within a.cpp

    std::cout << add(3, 4) << '\n';

    return 0;

}