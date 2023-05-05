#include <iostream>

int main()
{

    double d = double(10) / 4; // does integer division, initializes d with value 2.0

    int x { 10 };
    int y { 4 };
    double d1 = double(x) / y; // does integer division, initializes d with value 2.0

    //Convert character C to an Int (ASCII number)
    char c { 'a' };
    std::cout << c << ' ' << static_cast<int>(c) << '\n'; // prints a 97

    // To avoid intentional powerful C Cast 
    // const int x{ 5 };
	// int& ref{ static_cast<int&>(x) }; // invalid: will produce compilation error
	// ref = 6;

    //Implicit conv
    int i { 48 };
    char ch = i; // implicit narrowing conversion


    //Explicit conv
    int i1 { 48 };

// explicit conversion from int to char, so that a char is assigned to variable ch
   char ch1 { static_cast<char>(i) };



}