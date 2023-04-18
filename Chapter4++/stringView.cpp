#include <iostream>
#include <string>
#include <string_view>

void printString(std::string_view str)
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

    // std::string_view s {"Hello, World!"};

    constexpr std::string_view s1 {"Hello World!"};
    std::cout << s << '\n';

    std::string s{ "Hello, world" };
    std::string_view sv{ s }; // Initialize a std::string_view from a std::string

    std::cout << sv << '\n';
    printSV(s); // implicitly convert a std::string to std::string_view


    using namespace std::literals; // easiest way to access the s and sv suffixes

    std::cout << "foo\n";   // no suffix is a C-style string literal
    std::cout << "goo\n"s;  // s suffix is a std::string literal
    std::cout << "moo\n"sv; // sv suffix is a std::string_view literal


    // printSV(s);

    return 0;

}