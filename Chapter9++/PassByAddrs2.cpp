#include <cstddef>
#include <iostream>
#include <string>

void greet(std::string* name=nullptr)
{
    std::cout << "Hello ";
    std::cout << (name ? *name : "guest") << "\n";

}


void nullify([[maybe_unused]] int* ptr2)
{
    ptr2 = nullptr; //Make the function parameter a null pointer 
}

void nullify2(int*& refptr)
{
    refptr = nullptr;
}

void print(std::nullptr_t)
{
    std::cout << "in print(std::nullptr_t)\n";
}


int main()
{
    //Pass by address for optional arguments 
    greet(); 
    std::string joe{"Joe"};
    greet(&joe);

    //Changing what a pointer is pointing at 
    int x{5};

    int* ptr{&x};

    std::cout << "Ptr is " << (ptr ? "non-null\n" : "null\n");

    nullify(&x);

    std::cout << "Ptr is " << (ptr ? "non-null\n" : "null\n");

    //Pass by adrss by ref
    std::cout << "Ptr is " << (ptr ? "non-null\n" : "null\n");
    
    nullify2(ptr);

    std::cout << "Ptr is " << (ptr ? "non-null\n" : "null\n");

    //std::nullptr_t
    print(nullptr);
}