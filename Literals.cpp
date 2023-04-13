
#include <iostream>


int kmtoM(int km)
{
    return km * 1000; // fine: it's obvious 1000 is a conversion factor
}


int main()
{
    std::cout << 3.4;
    bool myName {true};

    std::cout << 5; // 5 (no suffix) is type int (by default)
    std::cout << 5L; // 5L is type long
    
    unsigned int x {5u};
    std::cout << x;

    float f { 4.1f }; // warning: 4.1 is a double literal, not a float literal
    double pi { 3.14159 }; // 3.14159 is a double literal in standard notation
    double avogadro {6.02e23};

    double eCharge {1.6e-19};

    //Magic number is a literal which has uclear meaning or changes later 
    constexpr int maxStudentsPerClass { 30 };
    // constexpr int totalStudents{ numClassrooms * maxStudentsPerClass }; // now obvious what this 30 means

    constexpr int maxNameLength{ 30 };
    // setMax(maxNameLength); // now obvious this 30 is used in a different context    



    return 5;
}