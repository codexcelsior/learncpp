#include <iostream>

int add(int x, int y) //Proper way to declare a function : before main function
{
    return x + y;
}

//QUESTION 4 ANW:
int doMath(int first, int second, int third, int fourth);


int add1(int x, int y); //Foward declaration 
int add1(int , int); // A valid Foward declaration

int main()
{
    std::cout << "The sum of 3 and 4 is: " << add(3, 4) << '\n';
    return 0;




}

//QUESTION 4: WRITE PROTOTYPE FOR THIS FUNCTION
int doMath(int first, int second, int third, int fourth)
{
     return first + second * third / fourth;
}


int add1(int x, int y)
{
    return x + y;
}