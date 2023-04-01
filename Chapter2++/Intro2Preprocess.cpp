#include <iostream> //USE INCLUDE TO PRECOMPILED/PREPROCESSED WITH IOSTREAM FILE
#define MY_NAME "Alex" //DEFINED ALEX
#define PRINT_JOE

int main()
{
    std::cout << "Hello, world!\n";
    std::cout << "My name is: " << MY_NAME << '\n'; //MY_NAME WILL BE REPLACED BY OBJECT CALLED ALEX

    #ifdef PRINT_JOE
    std::cout << "Joe\n"; // will be compiled since PRINT_JOE is defined
    #endif

    #ifdef PRINT_BOB
    std::cout << "Bob\n"; // will be excluded since PRINT_BOB is not defined
    #endif

#if 0 // Don't compile anything starting here
    std::cout << "Bob\n";
    std::cout << "Steve\n";
#endif // until this point

    std::cout << "Joe\n";

#if 1 // always true, so the following code will be compiled //IF 1 -> include for compilation , IF 0 -> not include
    std::cout << "Bob\n";
    /* Some
     * multi-line
     * comment here
     */
    std::cout << "Steve\n";
#endif

    return 0;
}