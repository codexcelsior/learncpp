#include <iostream>

void printOut(int x)
{
    switch(x)
    {
        case 1:
            std::cout << "One";
            return;
        case 2:
            std::cout << "Two";
            return;

        case 3:
            std::cout << "Three";
            return;

        default:
            std::cout << "Unknown";
            return;

    }
}

void printDigitName(int x)
{
    switch(x)
    {
        case 1:
            std::cout << "One";
            break;
        case 2:
            std::cout << "Two";
            break;

        case 3:
            std::cout << "Three";
            break;
        default:
            std::cout << "Unknown";
            break;
    }
    std::cout << " Ah-Ah-Ah!"; //If no cases + no default case -> execute this
}

int main() 
{
    std::cout << "Enter x: ";
    int x{};
    std::cin >> x;
    printOut(x);


    printDigitName(3);
    std::cout << '\n';
    return 0;
}