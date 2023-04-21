#include <iostream>
#include <cmath>
#include <cstdint>
#include <cassert>


std::int64_t powint(std::int64_t base, int exp)
{
	assert(exp >= 0 && "powint: exp parameter has negative value");

	std::int64_t result{ 1 };
	while (exp)
	{
		if (exp & 1)
			result *= base;
		exp >>= 1;
		base *= base;
	}

	return result;
}



bool isOdd(int x)
{
    return (x % 2) == 1; // fails when x is -5
}

bool isEven(int x)
{
    return (x % 2) == 0;
}



int main()
{
    // std::cout << "Enter an integer: ";
	// int x{};
	// std::cin >> x;

	// std::cout << "Enter another integer: ";
	// int y{};
	// std::cin >> y;

    // std::cout << "The remainder is " << x % y << "\n";

    // if ((x % y) == 0)
    //     std::cout << x << " is evenly divisible by " << y << "\n";
    // else
    //     std::cout << x << " is not evenly divisible by " << y << "\n";


    // double x1{ std::pow(3.0, 4.0) };


	// std::cout << powint(7, 12); // 7 to the 12th power.( Raise 7 to the power of 12th)

    //Quiz 2
    int x{};
    std::cout << "Enter an integer: ";
    std::cin >> x;

    if (isEven(x) == true) 
        std::cout << x << " is even " << "\n";
    else if (isOdd(x) == true)
        std::cout << x << " is odd " << "\n";







}