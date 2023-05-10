#include <iostream>
#include <string>


void printValue(std::string& y) // type changed to std::string&
{
    std::cout << y << "\n";
} //y is destroyed here 

void addOne(int& y)
{
    ++y;
}

void foo(int a, int& b, const std::string& c)
{
}


void printvalue(const int& y) // y is now a const reference
{
    std::cout << y << '\n';
}

int main()
{
    std::string x { "Hello, world"};
    printValue(x); // x is now passed by reference into reference parameter y (inexpensive)

    //Pass by reference allowed us to change the value of an argument
    int x1 { 5 };

    std::cout << "value = " << x1 << '\n';

    addOne(x1); //Reference refers y to x1 -> change the value of x1 instead 

    std::cout << "value = " << x1 << '\n'; // x has not been modified


    //Pass by const ref
    const int z { 5 };
    printvalue(z); // ok: z is a non-modifiable lvalue

    printvalue(5); // ok: 5 is a literal rvalue

    //Mixing pass by val and pass by ref
    int y { 5 };
    const std::string s { "Hello, world!" };

    foo(5, y, s);




}