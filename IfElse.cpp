#include <iostream>

bool isEqual(int x, int y)
{
    return (x == y);
}


void primeNumber(int num)
{
    if (num == 1 | num == 2| num == 3| num == 5)
        std::cout << "The value is a prime number";
    else 
        std::cout << "The value is not a prime number \n";
}

int main()
{
    std::cout << "Enter an integer: ";
    int x {};
    std:: cin>> x;

    std::cout << "Enter another int: ";
    int y {};
    std:: cin>> y;

    // if (x == 0)
    //     std::cout << "The value is zero \n";

    std::cout << std::boolalpha; //print out bools true or false
    if (isEqual(x, y))
     std::cout << x << " and " << y << " is euqals \n";
    else
     std::cout << x << " and " << y << " is not euqals \n";    

    std::cout << "Enter a number from 0 to 9: ";
    int num {};
    std::cin >> num;
    primeNumber(num);


    return 0;
}

