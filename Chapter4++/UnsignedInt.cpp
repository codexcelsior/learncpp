#include <iostream>


void doSomthing(unsigned int x)
{
    std::cout << "x is " << x << "\n";
}



int main()
{

    //USIGNED OVERFLOW

    // unsigned short x{ 65535 }; // largest 16-bit unsigned value possible
    // std::cout << "x was: " << x << '\n';

    // x = 65536; // 65536 is out of our range, so we get wrap-around
    // std::cout << "x is now: " << x << '\n';

    // x = 65537; // 65537 is out of our range, so we get wrap-around
    // std::cout << "x is now: " << x << '\n';

    //
    signed int s { -1 };
    unsigned int u { 1 };

    if (s < u)
        std::cout << " - 1 is less than 1\n";
    else
        std::cout << " 1 is less than 1\n";


    doSomthing(-1);

    return 0;
}