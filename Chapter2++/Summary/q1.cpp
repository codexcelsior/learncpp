#include <iostream>

int readNumber()
{
    int num;
    std::cout << "Enter an integer: ";
    std::cin >> num;
    return num;
}

void writeAnswer(int x)
{
    std::cout << x << "\n"; 
}

int main()
{
    int x { readNumber() };
    int y { readNumber() };
    writeAnswer( x + y ) ;
}

