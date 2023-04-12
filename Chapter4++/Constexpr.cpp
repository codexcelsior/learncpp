#include <iostream>

int getNumber()
{
    std::cout << "Enter a number: ";
    int num{};

    std::cin >> num;

    return num;
}

int five()
{
    return 5;
}


int main() 
{
    int x1{3 + 4};
    std::cout << x1 << "\n";

    const int x {3}; //x is a compile time const
    const int y {getNumber()}; //y is a runtime time const

    const int z {x + y}; //a runtime expression

    std::cout << z << "\n";

    constexpr double gravity {9.8};
    constexpr int sum {4 + 5};
    constexpr int something {sum};

    std::cout << "Enter your age: ";
    int age{};
    std::cin >> age;

    // constexpr int myAge { age };      // compile error: age is not a constant expression
    // constexpr int f { five() };       // compile error: return value of five() is not a constant expression


    return 0;
}