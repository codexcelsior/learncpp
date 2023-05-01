#include <iostream>



void printDivision1(int x, int y)
{
    if (y == 0)
    {
        std::cout << static_cast<double>(x) / y;
    }
    else
    {
        std::cerr << "Error: Could not divide by zero\n";
    }
}

double reciprocal(double x)
{
    if (x == 0.0)
        return 0.0;
    
    return 1.0 / x ;
}

double doDivision(int x, int y)
{
    if (y == 0)
    {
        std::cerr << "Error: Could not divide by zero\n";
        std::exit(1);
    }
    return static_cast<double>(x) / y;
}



int main()
{

    //Handling precision errors 
    double d{ 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 }; // should sum to 1.0

    if (d == 1.0)
        std::cout << "equal\n";
    else
        std::cout << "not equal\n";




    

    return 0;




}
