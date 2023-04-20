#include <iostream>

double Val()
{
    int value;
    std::cout << "Enter a double value: ";
    std::cin >> value;
    return(value); 
}

double doubleVal()
{
    double value;
    std::cout << "Enter a double value: ";
    std::cin >> value;
    return(value); 
}

void getResult(double x, double y)
{   
    char operation{};
    std::cout << "Enter one of the following: +, -, * or /: ";
    std::cin >> operation;
    if (operation == '+')
        std::cout << x << " + " << y << " is " << x + y << '\n';
    else if (operation == '-')
        std::cout << x << " - " << y << " is " << x - y << '\n';
    else if (operation == '*')
        std::cout << x << " * " << y << " is " << x * y << '\n';
    else if (operation == '/')
        std::cout << x << " / " << y << " is " << x / y << '\n';

}


int main()
{
    double x = Val();
    double y = doubleVal();
    getResult(x, y);

}