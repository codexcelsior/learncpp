#include <iostream>

int main()
{
    //Const lvalue ref cannot be modifiable
    const int x { 5 };    // x is a non-modifiable lvalue
    const int& ref { x }; // okay: ref is a an lvalue reference to a const value

    std::cout << ref << '\n'; // okay: we can access the const object
    // ref = 6;                  // error: we can not modify an object through a const reference


    //Unmodifiable lvalue through lvalue ref

    int y { 5 };          // x is a modifiable lvalue
    const int& ref1 { y }; // okay: we can bind a const reference to a modifiable lvalue

    std::cout << ref1 << '\n'; // okay: we can access the object through our const reference
    // ref1 = 7;                  // error: we can not modify an object through a const reference

    y = 6;                // okay: x is a modifiable lvalue, we can still modify it through the original identifier


    //-> Favour Lvalue ref to const over const ref to L value


    return 0;
}