#include <iostream>
#include <string>

int main()
{
    std::string str{"The rise is cooking"};
    str.erase(4, 11);

    std::cout << str << '\n';

    std::string car{ "I saw a red car yesterday." };

    car.replace(8, 3, "blue"); //replace (start, how many characters, "what new string?")

    std::cout << car << '\n';
}