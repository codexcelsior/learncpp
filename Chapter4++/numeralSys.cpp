#include <iostream>
#include <bitset>

int main()
{
    int x {012};
    std::cout << x << "\n";

    int z{12};

    //Why 10 instead of 12? Because numbers are output in decimal by default, and 12 octal = 10 decimal.
    int y {0xF};
    std::cout << y << "\n";

    int bin{};    // assume 16-bit ints
    bin = 0x0001; // assign binary 0000 0000 0000 0001 to the variable
    bin = 0x0002; // assign binary 0000 0000 0000 0010 to the variable
    bin = 0x0004; // assign binary 0000 0000 0000 0100 to the variable
    bin = 0x0008; // assign binary 0000 0000 0000 1000 to the variable
    bin = 0x0010; // assign binary 0000 0000 0001 0000 to the variable
    bin = 0x0020; // assign binary 0000 0000 0010 0000 to the variable
    bin = 0x0040; // assign binary 0000 0000 0100 0000 to the variable
    bin = 0x0080; // assign binary 0000 0000 1000 0000 to the variable
    bin = 0x00FF; // assign binary 0000 0000 1111 1111 to the variable
    bin = 0x00B3; // assign binary 0000 0000 1011 0011 to the variable
    bin = 0xF770; // assign binary 1111 0111 0111 0000 to the variable

    int bin1 { 0b1011'0010 };  // assign binary 1011 0010 to the variable
    long value { 2'132'673'462 }; // much easier to read than 2132673462

    //Outputing a value in decimal ,octal, hexa
    std::cout << std::hex << y << "\n";
    std::cout << std::oct << x << "\n";
    std::cout << std::dec << x << "\n";

    std::bitset<8> bin2{ 0b1100'0101 }; //binary literal for binary value 11000101
    std::bitset<8> bin3{ 0xC5 };

    std::cout << bin1 << '\n';
    std::cout << std::bitset<4> {0b10101} << "\n";



    return 0;
}