#include <iostream>

int main()
{
    int x{ 5 };
    std::cout << x << '\n'; // print the value of variable x

    int* ptr{ &x }; // ptr holds the address of x
    std::cout << *ptr << '\n'; // use dereference operator to print the value at the address that ptr is holding (which is x's address)

   //Null pointers
   int* ptr {}; // ptr is now a null pointer, and is not holding an address
   ptr = &x; //ptr now pointing at object x

    std::cout << *ptr << '\n'; // print value of x through dereferenced ptr

// nullptr keyword
    int* ptr { nullptr }; // can use nullptr to initialize a pointer to be a null pointer

    int value { 5 };
    int* ptr2 { &value }; // ptr2 is a valid pointer
    ptr2 = nullptr; // Can assign nullptr to make the pointer a null pointer

    someFunction(nullptr); // we can also pass nullptr to a function that has a pointer parameter

//Checking if Null Ptr or Not
    int* nullPtr{};
    std::cout << ((nullPtr == nullptr) ? "null\n" : "non-null\n");

//Use nullptr to avoid dangling pointers

// Assume ptr is some pointer that may or may not be a null pointer
if (ptr) // if ptr is not a null pointer
    std::cout << *ptr << '\n'; // okay to dereference
else
    // do something else that doesn't involve dereferencing ptr (print an error message, do nothing at all, etc...)

//Favor pointers over refs

    int* ptr { };

    {
        int x{ 5 };
        ptr = &x; // set the pointer to an object that will be destroyed (not possible with a reference)
    } // ptr is now dangling

    return 0;
}