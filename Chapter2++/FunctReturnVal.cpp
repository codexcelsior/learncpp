#include <iostream>
#include <cstdlib>

int getValueFromUser()
{
    std::cout << "Enter an integer: ";
    int input{};
    std::cin >> input;

    return input;
}

// int returnFive() 
// {
//     return 5;
// }


int main() 
{
    //get a value 
    // std::cout << "Enter an integer: ";
    int num{getValueFromUser()};
    //print the value doubled
    std::cout << num << " doubled is: " << num * 2 << "\n"; 

    // //Using returnFive function:
    // std::cout << returnFive() << "\n";
    // std::cout << returnFive() + 2 << "\n";
    // returnFive();

    int x {};
    std::cout << "Enter x: ";
    std::cin >> x;

    int y {};
    std::cout << "Enter y: ";
    std::cin >> y;

    std::cout << x << " + " << y << " = " << x + y << "\n";

    // DONT REPEAT YOUR SELF -> DRY


    int x1 {getValueFromUser()};
    int y1 {getValueFromUser()};

    std::cout << x1 << " + " << y1 << " = " << x1 + y1 << "\n";

    //If you consider WET (Write everything twice) => reduce as much redundancy as possible 

    return 0;
    return EXIT_SUCCESS; 


    // Solving some quizz boiz

    
}