#ifndef CONSTANT_H
#define CONSTANT_H

namespace constants
{
    inline constexpr double pi { 3. 14 };
    inline constexpr double avagadro { 6.0221413e23 };
    inline constexpr double myGravity { 9.2 }; // m/s^2 -- gravity is light on this planet
    // ... other related constants
}



#endif


//Another file (main.cpp)

// #include "constants.h"

// #include <iostream>

// int main()
// {
//     std::cout << "Enter a radius: ";
//     int radius{};
//     std::cin >> radius;

//     std::cout << "The circumference is: " << 2.0 * radius * constants::pi << '\n';

//     return 0;
// }