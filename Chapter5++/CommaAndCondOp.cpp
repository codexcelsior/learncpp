#include <iostream>


void foo(int x, int y) // Comma used to separate parameters in function definition
{
    //add(x, y); // Comma used to separate arguments in function call
    constexpr int z{ 3 }, w{ 5 }; // Comma used to separate multiple variables being defined on the same line (don't do this)
}


int getClassSize(bool inBigClassroom)
{
    if (inBigClassroom)
        return 30;

    return 20;
}


int main()
{
    int x{ 1 };
    int y{ 2 };
    int larger{};

    std::cout << (++x, ++y) << '\n'; // increment x and y, evaluates to the right operand

    //z = (a, b); // evaluate (a, b) first to get result of b, then assign that value to variable z.
    //z = a, b; // evaluates as "(z = a), b", so z gets assigned the value of a, and b is evaluated and discarded.

    //Conditional operator c ? x : y 
    //If c is nonzero (true) then evaluate x, otherwise evaluate y
    
    if (x > y)
      larger = x;
    else
      larger = y;
      
    larger = (x > y) ? x : y;
    
    if (x > y)
       std::cout << x << '\n';
    else
       std::cout << y << '\n';
    std::cout << ((x > y) ? x : y) << "\n";
    
    const int classSize { getClassSize(false) };
    std::cout << "The class size is: " << classSize << '\n';

    
    return 0;
}