#include <iostream>

struct Employee
{
    int id{};
    int age{};
    double wage{};
};

//Printing out struct reference (Struct passing) 
void printEmployee(const Employee& employee)
{
    std::cout << "ID: " << employee.id << "\n";
    std::cout << "age: " << employee.age << "\n";
    std::cout << "wage: " << employee.wage << "\n";
}

//Returning struct



int main()
{
    Employee joe {14, 32, 24.15};
    Employee frank{15 , 28, 18.27};

    printEmployee(joe);

    std::cout << "\n";

    printEmployee(frank);

}