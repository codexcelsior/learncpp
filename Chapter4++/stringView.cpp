#include <iostream>
#include <string_view>


void printString(std::string str)
{
    std::cout << str << '\n';
}

void printSV(std::string str)
{
    std::cout << str << "\n";
}


int main() 
{
    int x {5};
    std::cout << x << "\n";

    // std::string s {"Hello, World"};
    // std::cout << s << "\n";

    // printString(s);

    std::string_view s {"Hello, World!"};
    
    printSV(s);

    return 0;

}