#include <iostream>

int readNumber()
{
    int num;
    std::cout << "Enter an integer: ";
    std::cin >> num;
    return num;
}

void writeAnswer(int x, int y)
{
    std::cout << "The answer is: " << x + y << "\n"; 
}

int main()
{
    int x { readNumber() };
    int y { readNumber() };
    writeAnswer( x, y ) ;
}

