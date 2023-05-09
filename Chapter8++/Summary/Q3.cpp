#include <iostream>
//A
// void print(int x)
// {
//     std::cout << "int " << x << '\n';
// }

// void print(double x)
// {
//     std::cout << "double " << x << '\n';
// }

//B
// void print()
// {
//     std::cout << "void\n";
// }

// void print(int x=0)
// {
//     std::cout << "int " << x << '\n';
// }

// void print(double x)
// {
//     std::cout << "double " << x << '\n';
// }

//C
void print(long x)
{
    std::cout << "long " << x << '\n';
}

void print(double x)
{
    std::cout << "double " << x << '\n';
}

int main()
{
    //a
    short s { 5 }; //Print int 5 due to numeric conversion
    // print(s);

    //B
    print(5.0f);
    // print(); //Wont compile due to ambiguous functions of default argument 


    //C
    // print(s); //Wont compile due to the ambiguity of numeric conversion



    return 0;
}