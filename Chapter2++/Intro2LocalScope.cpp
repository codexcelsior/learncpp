#include <iostream>
// x is not in scope anywhere in this function
void doIt(int x) //Question in the end
{
    int y{ 4 }; //STEP 2.1 X = 1 Y = 4 -> PRINT
    std::cout << "doIt: x = " << x << " y = " << y << '\n';

    x = 3; //STEP 3: X = 1 -> X = 3, Y = 4 -> PRINT
    std::cout << "doIt: x = " << x << " y = " << y << '\n';

    //STEP 4: TERMINATED HERE
}


int add(int x, int y)   // function parameters x and y are local variables
{
    int z{ x + y };     // z is a local variable too & z created and initialized here

    return z; 
}   //z created and initialized here

void doSomething()
{
    std::cout << "Hello!\n";
}

int main()
{

    // int a{ 5 }; // a is created, initialized, and enters scope here
    // int b{ 6 }; // b is created, initialized, and enters scope here

    // // a and b are usable within this function only
    // std::cout << add(a, b) << '\n'; // calls function add() with x=5 and y=6
    // // x can not be used here because it's not in scope yet

    // int x{ 0 }; // x's lifetime begins here

    // doSomething(); // x is still alive during this function call

    //STEP 0: GET X AND Y = 1 , 2 RESPECTIVELY
    int x{ 1 }; 
    int y{ 2 };

    //STEP 1: PRINT X = 1 , Y = 2
    std::cout << "main: x = " << x << " y = " << y << '\n';

    doIt(x); //STEP 2.0 GO TO DOLT FUNCT

    //STEP 5: X = 3, Y = 4 TERMINATED -> X = 1 , Y = 2 -> PRINT
    std::cout << "main: x = " << x << " y = " << y << '\n';

    return 0;


}  // x goes out of scope here and can no longer be used , // b and a go out of scope and are destroyed here

