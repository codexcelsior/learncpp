#include <iostream>
#include <string>
#include <cassert>
#include <string_view>


//Part 1


void printByValue(std::string val) // The function parameter is a copy of str
{
    std::cout << val << '\n'; // print the value via the copy
}

void printByReference(const std::string& ref) // The function parameter is a reference that binds to str
{
    std::cout << ref << '\n'; // print the value via the reference
}

void printByAddress(const std::string* ptr) // The function parameter is a pointer that holds the address of str
{
    std::cout << *ptr << '\n'; // print the value via the dereferenced pointer
}

void changeValue(int* ptr)
{
    *ptr = 6;
}

void print(int* ptr) //Make a function to check whether it is pointer or not
{

    assert(ptr); // fail the program in debug mode if a null pointer is passed (since this should never happen)

	// (optionally) handle this as an error case in production mode so we don't crash if it does happen
    if (ptr) // if ptr is not a null pointer
    {
        std::cout << *ptr;
    }
}


//Part 2

void greet(std::string* name=nullptr)
{
    std::cout << "Hello";
    std::cout << (name ? *name : "guest") << "\n";
}


void nullify([[maybe_unused]] int* ptr2)
{
    ptr2 = nullptr;
}


void nullify2(int*& refptr) // refptr is now a reference to a pointer
{
    refptr = nullptr; // Make the function parameter a null pointer
}


int main()
{
    std::string str{ "Hello, world!" };

    printByValue(str); // pass str by value, makes a copy of str
    printByReference(str); // pass str by reference, does not make a copy of str
    printByAddress(&str); // pass str by address, does not make a copy of str


    int x { 5 };
    std::cout << "x = " << x << '\n';

    changeValue(&x); // we're passing the address of x to the function

    std::cout << "x = " << x << '\n';

    greet(); //don't know who is
    std::string joe{ "Joe" };
    greet(&joe);

    
    //Changing what the pointer is pointing at

    int* ptr{ &x }; // ptr points to x

    std::cout << "ptr is " << (ptr ? "non-null\n" : "null\n");

    nullify(ptr);

    std::cout << "ptr is " << (ptr ? "non-null\n" : "null\n");


    //Pass by address by reference to change what the pointer is pointing at
    nullify2(ptr);

    return 0;
}