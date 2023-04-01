#include <iostream>

int main(void)
{   
    int x{};
    std::cout << "Enter an integer: ";
    std::cin >> x;

    x *= 2;
    std::cout << "Double that integer: " << x << "\n";

    return 0;
}