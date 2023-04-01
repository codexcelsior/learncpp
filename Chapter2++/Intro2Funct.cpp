#include <iostream>

void doPrint()
{
    std::cout << "In doPrint() \n"; //Step 1: print
}

void doB()
{
    std::cout << "In doB() \n";
}

void doA()
{
    std::cout << "Starting doA() \n";
    doB();
    std::cout << "Ending doA() \n";

}

void Foo()
{
    std::cout << "Foo\n";
}

int main()
{
    std::cout << "Starting main() \n"; //Step 1: print
    // doPrint(); //Step 2: use defined funct
    // doPrint(); //Step 2.1: reuse defined funct

    //ELLIGILE EXAMPLE OF NESTED FUNCT IN C++ -> NO NESTED FUNCTION IN CPP
    //     void Foo()
    // {
    //     std::cout << "Foo\n";
    // }


    doA();
    std::cout << "Ending main() \n"; //Step 3: print
    return 0;
}