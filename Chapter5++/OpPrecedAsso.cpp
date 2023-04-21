#include <iostream>



int getValue()
{
    std::cout << "Enter an integer: ";
    int x{};
    std::cin >> x;
    return x;
}


int main()
{

// x = (y + z + w);   // instead of this
// x = y + z + w;     // it's okay to do this

// x = ((y || z) && w); // instead of this
// x = (y || z) && w;   // it's okay to do this

// x = (y *= z); // expressions with multiple assignments still benefit from parenthesis

std::cout << getValue() + (getValue() * getValue()) << "\n";

int a{getValue()};
int b{getValue()};
int c{getValue()};

std::cout << a + (b * c) << "\n";

//Binary operator -> precedence : left to right 
// Assign operator -> precedence: right to left

}


