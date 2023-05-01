#include <iostream>

#include <cassert>
#include <cmath>


void printDivision(int x, int y)
{
    if (y == 0)
    {
        std::cerr << "Error: Could not divide by zero\n";
        return;
    }

    std::cout << static_cast<double>(x) / y;

}


double calculateTimeUntilObjectHitsGround(double initialHeight, double gravity)
{
    assert(gravity > 0.0);

    if (initialHeight <= 0.0)
    {
        return 0.0;
    }    
    return std::sqrt((2.0 * initialHeight) / gravity);
}

static_assert(sizeof(long) == 8, "long must be 8 bytes");
static_assert(sizeof(int) == 4, "int must be 8 bytes");


int main()
{
    std::cout << "Took " << calculateTimeUntilObjectHitsGround(100.0, -9.8) << " second(s)\n";

    return 0;
}
