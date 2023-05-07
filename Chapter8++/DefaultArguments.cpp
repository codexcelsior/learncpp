#include <iostream>


void print1(int x, int y= 10 )
{
    std::cout << "x: " << x << '\n';
    std::cout << "y: " << y << '\n';
}



void print(int x=10, int y=20, int z=30)
{
    std::cout << "Values: " << x << " " << y << " " << z << '\n';
}

// void print(int x, int y=4); // forward declaration

// void print(int x, int y=4) // error: redefinition of default argument
// {
//     std::cout << "x: " << x << '\n';
//     std::cout << "y: " << y << '\n';
// }


void print2(std::string string)
{
}

void print3(char ch=' ')
{
}



int main()
{
    print1(1, 2); // y will use user-supplied argument 2 -> OVERIDE  y = 10 to y = 2
    print1(3); // y will use default argument 4

    print(1, 2, 3); // all explicit arguments
    print(1, 2); // rightmost argument defaulted
    print(1); // two rightmost arguments defaulted
    print(); // all arguments defaulted

    // print("Hello, world"); // resolves to print(std::string)
    // print('a'); // resolves to print(char)
    // print(); // resolves to print(char)

}
