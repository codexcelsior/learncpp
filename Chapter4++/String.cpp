#include <iostream>
#include <string>
#include <string_view>

int main() 
{
    // std::cout << "Hello World \n";

    // std::string name {"Hello mother fucker"};
    // name = "JOHN CENNNA";

    // std::string myID{ "45" }; // "45" is not the same as integer 45!

    //Empty string will print nothing 
    std::string empty{ };
    std::cout << '[' << empty << ']' << "\n";

    //Errors
    std::cout << "Enter your full name: ";
    std::string name{};
    // std::cin >> name; // this won't work as expected since std::cin breaks on whitespace


    std::cout << "Enter your age: ";
    std::string age{};
    // std::cin >> age;

    std::getline(std::cin >> std::ws, name);
    std::getline(std::cin >> std::ws, age);

    std::cout << "Your name is " << name << " and your age is " << age << '\n';

    std::cout << "Your name has a length of " << name.length() << " characters " << "\n";

    //Mind the unsigned return value
    int length { static_cast<int>(name.length())};

    using namespace std::literals; // easiest way to access the s and sv suffixes

    std::cout << "foo\n";   // no suffix is a C-style string literal
    std::cout << "goo\n"s;  // s suffix is a std::string literal
    // std::cout << "moo\n"sv; // sv suffix is a std::string_view literal

    //Quizz
    std::cout << "Enter your full name: ";
    std::getline(std::cin >> std::ws, name);
    std::cout << "Enter your age: ";
    std::getline(std::cin >> std::ws, age);
    std::cout << "Your age + length of name is:" << static_cast<int>(name.std::string::length()) + static_cast<int>(age.std::string::length());



    return 0;
}