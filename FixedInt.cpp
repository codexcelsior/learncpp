#include <cstddef>
#include <cstdint>
#include <iostream>

int main()
{
    std::int16_t x {5};
    std::cout << x << "\n";
    return 0;


    //Printing out the size of int at least 8 bits. Sizeof returns bytes instread of bits
    std::cout << "least 8:  " << sizeof(std::int_least8_t) * 8 << " bits\n";
	std::cout << "least 16: " << sizeof(std::int_least16_t) * 8 << " bits\n";
	std::cout << "least 32: " << sizeof(std::int_least32_t) * 8 << " bits\n";
	std::cout << '\n';
	std::cout << "fast 8:  " << sizeof(std::int_fast8_t) * 8 << " bits\n";
	std::cout << "fast 16: " << sizeof(std::int_fast16_t) * 8 << " bits\n";
	std::cout << "fast 32: " << sizeof(std::int_fast32_t) * 8 << " bits\n";


    std::uint_fast16_t sometype { 0 };
    --sometype; // intentionally overflow to invoke wraparound behavior

    std::cout << sometype;

    //How to use std::size_t. It can hold anything largest as possible to the system   
    std::size_t n;
}

