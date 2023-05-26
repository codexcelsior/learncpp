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
struct Point3d
{
    double x {0.0};
    double y {0.0};
    double z {0.0};
};

Point3d getZeroPoint()
{
    Point3d temp {0.0, 0.0, 0.0};
    return temp;
}


//Getting unamed returing struct function

Point3d getZEroPoint()
{
    return {0.0,0.0, 0.0};
}

// Point3d getZEroPoint()
// {
//     return Point3d {0.0,0.0, 0.0};
// }

//Struct ưith program-defined members
struct Company
{
    int numberofEmployee{};
    Employee CEO {}; //Employee is a struct within a Company struct 
};


struct Foo
{
    short a {};
    int b {};
    double c {};
};

struct Foo1
{
    short a{};
    short qq{}; // note: qq is defined here
    int b{};
    double c{};
};

struct Foo2
{
    short a{};
    int b{};
    double c{};
    short qq{}; // note: qq is defined here
};

//Q1
struct Advertising
{
    int adShown{};
    double adPercentage{};
    double adAVGPerClick{};
};


Advertising getAdvertising()
{
    Advertising temp;
    std::cout << "How many ads were shown today? ";
    std::cin >> temp.adShown;
    std::cout << "What percentage of ads were clicked on by users? ";
    std::cin >> temp.adPercentage;
    std::cout << "What was the average earnings per click? ";
    std::cin >> temp.adAVGPerClick;

    return temp;
}


void printAdvertising(const Advertising& ad)
{
    std::cout << "Numbers of ads: " <<ad.adShown;
    std::cout << "Percentage of ads: " << ad.adPercentage;
    std::cout << "Ad Average click:  " << ad.adAVGPerClick;
}


//Q2
struct Fraction
{
    int numerator{0};
    int denominator{1};
};

Fraction getFraction()
{
    Fraction fract;
    std::cout << "Enter a value for the numerator: ";
    std::cin >> fract.numerator;
    std::cout << "Enter a value for the denominator: ";
    std::cin >> fract.denominator;

    return fract;
}

Fraction multiply(const Fraction& newFract, const Fraction& newFract1)
{
    return {newFract.numerator * newFract1.numerator, newFract.denominator * newFract1.denominator};
}

void printFraction(const Fraction& f)
{
    std::cout << f.numerator << "/" << f.denominator << "\n";
}


int main()
{
    Employee joe {14, 32, 24.15};
    Employee frank{15 , 28, 18.27};

    printEmployee(joe);

    std::cout << "\n";

    printEmployee(frank);

    //Returning type
    Point3d zero {getZeroPoint()};

    if (zero.x == 0 && zero.y == 0.0 && zero.z == 0.0)
        std::cout << "The point is zero \n";
    else
        std::cout << "The point is not zero \n";

    Company myCompany{7, {1, 32, 55000.0}};

    std::cout << myCompany.CEO.wage;


    //Struct size and Data Struct alignment
    std::cout << "Size of Foo is " << sizeof(Foo) << "\n";

    
    //Q1: 
    Advertising ad;
    printAdvertising(ad);

    //Q2:
    Fraction f1{getFraction()};
    Fraction f2{getFraction()};

    printFraction(multiply(f1, f2));

}