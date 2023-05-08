#include <iostream>

namespace constants
{
    constexpr double pi { 3.14159 };
}

using Degrees = double;
using Radians = double;

double convertToRadians(Degrees degrees)
{
    return degrees * constants::pi / 180;
}

int main()
{
    std::cout << "Enter a number of degrees: ";
    Degrees degrees{};
    std::cin >> degrees;

    Radians radians { convertToRadians(degrees) };
    std::cout << degrees << " degrees is " << radians << " radians.\n";


    //B solution
    //It will compile. radians has type Radians, which is a type alias for double. degrees has type Degrees, 
    //which is also a type alias for double. So this just the assignment of a double value to a variable of type double

    return 0;
}