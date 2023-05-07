#include <iostream>
#include <cmath>

template <int N>
void print()
{
    std::cout << N;
}

template <double D> //requires C++ 20 for floating point parametters
double getSqrt()
{
    assert(D >= 0.0 && "getSqrt(): d must be non-negative");

    if (D >= 0)
        return std::sqrt(D);

    return 0.0;
}



int main()
{
    print<5>(); //5 is a non-type template argument 

    print<'c'>(); // 'c' converted to type int, prints 99

    return 0;
}

