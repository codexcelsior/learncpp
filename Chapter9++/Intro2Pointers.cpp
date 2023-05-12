#include <iostream>

int main()
{
    int x{ 5 };
    std::cout << x << '\n';  // print the value of variable x
    std::cout << &x << '\n'; // print the memory address of variable x
     std::cout << *(&x) <<  '\n'; // print the value at the memory address of variable x (parentheses not required, but make it easier to read)
	
    int* ptr; //hold no address
    int* ptr2{};     // a null pointer (we'll discuss these in the next lesson)
    int* ptr3{ &x }; // a pointer initialized with the address of variable x
 
//Pointer init
    int* iPtr{ &i };     // ok: a pointer to an int can point to an int object
    int* iPtr2 { &d };   // not okay: a pointer to an int can't point to a double
    double* dPtr{ &d };  // ok: a pointer to a double can point to a double object
    double* dPtr2{ &i }; // not okay: a pointer to a double can't point to an int

//Pointer and assignment

    int* ptr{ &x }; // ptr initialized to point at x

    std::cout << *ptr << '\n'; // print the value at the address being pointed to (x's address)

    int y{ 6 };
    ptr = &y; // // change ptr to point at y

    std::cout << *ptr << '\n'; // print the value at the address being pointed to (y's address)

//Work like lvalue refs

    int x{ 5 };
    int& ref { x };  // get a reference to x
    int* ptr { &x }; // get a pointer to x

    std::cout << x;
    std::cout << ref;  // use the reference to print x's value (5)
    std::cout << *ptr << '\n'; // use the pointer to print x's value (5)

    ref = 6; // use the reference to change the value of x
    std::cout << x;
    std::cout << ref;  // use the reference to print x's value (6)
    std::cout << *ptr << '\n'; // use the pointer to print x's value (6)

    *ptr = 7; // use the pointer to change the value of x
    std::cout << x;
    std::cout << ref;  // use the reference to print x's value (7)
    std::cout << *ptr << '\n'; // use the pointer to print x's value (7)

//Address of operator 

	int x{ 4 };
	std::cout << typeid(&x).name() << '\n'; // print the type of &x //Return pointers type

//Size of pointers

    char* chPtr{};        // chars are 1 byte
    int* iPtr{};          // ints are usually 4 bytes
    long double* ldPtr{}; // long doubles are usually 8 or 12 bytes

    std::cout << sizeof(chPtr) << '\n'; // prints 4
    std::cout << sizeof(iPtr) << '\n';  // prints 4
    std::cout << sizeof(ldPtr) << '\n'; // prints 4
     // The operator often has a size of 4 bytes (32 bits) and 8 bytes (64 bits)



//Quiz 1

	short value{ 7 }; // &value = 0012FF60
	short otherValue{ 3 }; // &otherValue = 0012FF54

	short* ptr{ &value };

	std::cout << &value << '\n'; //0012FF60
	std::cout << value << '\n'; //7
	std::cout << ptr << '\n'; //0012FF60
	std::cout << *ptr << '\n'; //7
	std::cout << '\n';

	*ptr = 9;

	std::cout << &value << '\n';
	std::cout << value << '\n';
	std::cout << ptr << '\n';
	std::cout << *ptr << '\n';
	std::cout << '\n';

	ptr = &otherValue;

	std::cout << &otherValue << '\n'; //0012FF54
	std::cout << otherValue << '\n'; // 3
	std::cout << ptr << '\n'; // 0012FF60
	std::cout << *ptr << '\n'; // 7
	std::cout << '\n'; 

	std::cout << sizeof(ptr) << '\n'; //4 bytes (32 bit pointer)
	std::cout << sizeof(*ptr) << '\n'; //2 bytes of short

//Q2

       int value{ 45 };
       int* ptr{ &value }; // declare a pointer and initialize with address of value
      ptr = &value; // assign address of value to ptr




    return 0;
}