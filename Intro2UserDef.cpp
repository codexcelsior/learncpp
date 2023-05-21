#include <iostream>

using length = int; // define a type alias with identifier 'length'

// #ifndef FRACTION_H
// #define FRACTION_H
struct Fraction //should be in a header file
{
    int numerator{};
    int denominator{};
};

// #endif

//include "Fraction.h"

int main()
{
    length x { 5 }; // we can use 'length' here since we defined it above
    std::cout << x;

    Fraction fraction { 3, 4 };

    return 0;
}