#include <iostream>
#include <cstdint>

void print(double x)
{
    std::cout << x << "\n";
}


int main()
{
    double x = 5.5;
    print(x);

    print(static_cast<int>(5.5));

    //Printing out the value of a in ASCII
    char ch{'a'};
    std::cout << ch << " has a value of " << static_cast<int>(ch);

    //Convert Unsigned int to Signed int 
    unsigned int u {5u}; //5u means 5 unsigned
    int s {static_cast<signed int>(u)};
    std::cout << s << "\n";


    //std::int8_t vs std::uint8_t (Both are string)
    
    std::int8_t my_int {65};
    std::cout << my_int << "\n";
    
     std::cout << static_cast<int>(my_int); // will always print 65 //Printing out character 65 in ASCII

    //Quizz 

    char chinput{};
    std::cout << "Enter a single character: ";
    std::cin >> chinput;

    std::cout << "You entered " << chinput << ", which has ASCII code " << static_cast<int>(chinput) << ".\n"; 

    return 0;


}