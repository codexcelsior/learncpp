#include <iostream>
#include <string>

const std::string& getProgramName()
{
    static const std::string s_programName{"Calculator"}; //has static duration, destroyed at the end of the program
    return s_programName;
}

const int& getNextId()
{
    static int s_x{ 0 };
    ++s_x;
    return s_x;
}

const int& printOne()
{
    static const int x {1};
    return x;
}

// takes two integers by non-const reference, and returns the greater by reference
int& max(int& x, int& y)
{
    return (x > y) ? x : y;
}


int main()
{
    std::cout << "This program is named " << getProgramName() << "\n";

    const int& id1 {getNextId()};
    const int& id2 {getNextId()};

    std::cout << id1 << id2 << '\n';

    const int& x1 {printOne()};
    
    std::cout << x1 << "\n";

    std::string name { getProgramName() }; // makes a copy of a dangling reference

    std::cout << name << "\n";

    //Modify values through reference 
    int a{ 5 };
    int b{ 6 };
    max(a, b) = 7; // sets the greater of a or b to 7

    std::cout << a << b << '\n';

    return 0;
}