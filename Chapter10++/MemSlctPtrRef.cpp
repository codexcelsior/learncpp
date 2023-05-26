#include <iostream>
#include <string>

struct Employee
{
    int id {};
    int age {};
    double wage {};
};

void printEmployee(const Employee& e)
{
        // Use member selection opeartor (.) to select member from reference to struct
    std::cout << "Id: " << e.id << '\n';
    std::cout << "  Age: " << e.age << '\n';
    std::cout << "  Wage: " << e.wage << '\n';
}

//Mixing pointers and non pointers to members
struct Paw
{
    int claw{};
};

struct Animal 
{
    std::string name{};
    Paw paw{};
};

int main()
{
    Employee joe { 1, 34, 65000.0 };

    // Use member selection operator (.) to select a member from struct object
    ++joe.age; // Joe had a birthday
    joe.wage = 68000.0; // Joe got a promotion

    printEmployee(joe);

    Employee* ptr {&joe};
    std::cout << (*ptr).id << '\n'; //Not great man

    std::cout << ptr -> id << '\n'; //Better

    //Mixing pointers to non-pointers to members
    Animal Puma {"Puma", 4};
    Animal* animalPtr {&Puma};

    std::cout << (animalPtr->paw).claw << '\n';



    return 0;
}