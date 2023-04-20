#include <cstdint>
#include <iostream>

int main()
{
    std::cout << "How old are you now\n";

    int age{};
    std::cin >> age;

    std::cout << "Allowed to drive car in Texas [";

    constexpr int ageLim = 16;
    if (ageLim >= 16)
        std::cout << "x";
    else
        std::cout << " ";
    
    std::cout << "]\n";
}