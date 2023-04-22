#include <iostream>



int add(int x, int y)
{
    return x + y;
}


int main()
{
    int x{ 5 };
    int y{ 5 };
    std::cout << x << ' ' << y << '\n';
    std::cout << ++x << ' ' << --y << '\n'; // prefix
    std::cout << x << ' ' << y << '\n';
    std::cout << x++ << ' ' << y-- << '\n'; // postfix
    std::cout << x << ' ' << y << '\n';

    // std::cout << x << "\n";
    int value{ add(++x, x) }; // is this 5 + 6, or 6 + 6?
    //Return value -> prioritized. ++x returns a value of 6 first then it comes to add function which take the sum of 2 sixs
    //Actually different interpreter different behaviour 

    // It depends on what order your compiler evaluates the function arguments in

    std::cout << value << '\n'; // value could be 11 or 12, depending on how the above line evaluates!
    return 0;

    return 0;
}