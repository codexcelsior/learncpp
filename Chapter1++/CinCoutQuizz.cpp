#include <iostream>

int main() 
{
    std::cout << "Enter a number: ";
    int x{};
    std::cin >> x;
    std::cout << "You entered " << x << "\n";

    //Enter anything like string into int input gives 0
    //Negative int -> FIne
    //Both string and number -> return the int value
}