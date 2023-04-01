#include <iostream>
//five is a function that returns 5
int five() 
{
    return 5;
}

int main(void)
{
 int a{2}; //initialize the value with a literal of 2 
 int b {2 + 3}; // initialize with the computed value of 5
 int c {(2 * 3) +4}; //initialize with the computed value of 10
 int d {b}; //initialize a variable d with the variable value of 5
 int e{five()}; //initialize a variable e with the function of returning value of 5

// Anything you call before giving results (or without ;) is expression: like returing value of 5, x = 2, x = 2+ 3, d = b...  
// if we were to break down, the statement will look like this:
// statement = type identifier {expression};

 return 0;
}