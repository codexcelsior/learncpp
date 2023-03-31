#include <iostream>

int main() 
{
    //cout stands for character output
    std::cout << "Hello World!";
    
    //printing 4 in console
    std::cout << 4;

    //define x then assign x for printing in console
    int x {5};
    std::cout << x;

    std::cout << "Hello" << " World!";

    //Printing out both a string and an int
    std::cout << "x is equal to: " << x;

    //Endl
    // adding std::endl will jump to new line
    std::cout << "x is equal to: " << 10 << std::endl;

    //std::endl vs '\n'

    std::cout << "x is equal to: " << x << '\n';
    std::cout << "And that's all, folks!\n";

    //std::cin
    std::cout << "Enter a number? ";
    int y{ };
    std::cin >> y;
    std::cout << "You entered: " << y << "\n";

    // Receiving 2 inputs in a line
    std::cout << "Enter two number seperately: ";
    int z { };
    int c { };
    std::cin >> z >> c;
    std::cout << "The numbers you entered: " << z << " " << c << "\n";
    

    return 0;
}