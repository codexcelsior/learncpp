#include "iostream"
#define MAX_STUDENTS_PER_CLASS 30 //A CONST 



void printInt(const int x)
{
    std::cout << x << '\n';
}

const int returnValue()
{
    return 5;
}



int main()
{
    int x{4}; //non constant
    x = 5; //change the value of x to 5

    const double gravity {9.8};
    const int  sidesInSquare {10};

    

    //false example
    // const double gravity; // error: const variables must be initialized
    // gravity = 9.9;        // error: const variables can not be changed


    std::cout << "Enter your age: ";
    int age{};
    std::cin >> age;

    const int constAge{age};

    age = 5;
    // constAge = 6; error

    printInt(5); // 5 will be used as the initializer for x
    printInt(6); // 6 will be used as the initializer for x

    const int maxStudentPerClass {30}; //This is a symbolic const
    






}