#include <iostream>

int main()
{
    int x{ 5 };
    int y{ 7 };

    //PRECENDENCE
    if (!(x > y))
        std::cout << x << " is not greater than " << y << '\n';
    else
        std::cout << x << " is greater than " << y << '\n';

    //Logical OR
    std::cout << "Enter a number: ";
    int value{};
    std::cin >> value;

    if (value == 0 || value == 1)
        std::cout << "You picked 1 or 0";
    else
        std::cout << "You didn't pick 0 or 1";

    if (value == 1|| value == 2|| value == 3|| value == 4)
        std::cout << "You picked 1 or 2 or 3 or 4";
    
    if (value > 10 && value < 20)
        std::cout << "Your value is between 10 and 20\n";
    else
        std::cout << "Your value is not between 10 and 20\n";


    //if (static_cast<bool>(a) != static_cast<bool>(b) != static_cast<bool>(c)) 
    //Logical XOR

    
    return 0;
}