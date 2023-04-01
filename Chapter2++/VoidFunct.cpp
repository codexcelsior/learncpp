#include <iostream>


// Function that does not return a value
void returnNothing()
{
}


// Function that returns a value
int returnFive()
{
    return 5;
}


void printHi()
{
    std::cout << "Hello" << "\n";
}

// //FALSE EXAMPLE OF RETURNING A VALUE FROM A VOID FUNCTION
// void printHi() // This function is non-value returning
// {
//     std::cout << "In printHi()" << '\n';

//     return 5; // compile error: we're trying to return a value
// }

int print()
{
    std::cout << "A";
    return 5; //returning a vaule too soon
    std::cout << "B"; //this will never be printed 
} // -> THE RETURN STATEMENT MUST BE PLACED AS THE LAST ONE

int main()
{
    printHi();

        // When calling a function by itself, no value is required
    returnNothing(); // ok: we can call a function that does not return a value
    returnFive();    // ok: we can call a function that returns a value, and ignore that return value

    // When calling a function in a context that requires a value (like std::cout)
    std::cout << returnFive() << "\n";    // ok: we can call a function that returns a value, and the value will be used
    // std::cout << returnNothing(); // compile error: we can't call a function that returns void in this context

    std::cout << print() << "\n";

    return 0;

    // std::cout << ; //TYPICAL TYPE OF ERRORS BECAUSE NO VALUE RETURNED
}