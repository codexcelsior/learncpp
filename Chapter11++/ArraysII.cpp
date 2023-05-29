

#include <iostream>
#include <iterator>


//Arrays and Enum 
enum StudentNames
{   
    kenny,
    kyle,
    stan,
    butters,
    cartman,
    max_students
};


//Arrays and Enum class
enum class NewStudentsNames 
{
    
    kyle,
    stan,
    butters,
    cartman,
    max_students
};

//Passing array to functions
void passValue(int value) //value is a copy of the arguments
{
    value = 99; //so chanding it here wont change the value of the arguments
}


void passArray(int prime[5])
{
    prime[0] = 11; //Changing it here will change the original argument!
    prime[1] = 7;
    prime[2] = 5;
    prime[3] = 3;
    prime[4] = 2;

}


int main()
{
    //Initializing fixed arrays
    int prime[5]; // hold the first 5 prime numbers
    prime[0] = 2;
    prime[1] = 3;
    prime[2] = 5;
    prime[3] = 7;
    prime[4] = 11;

    int primeInit[5]{ 2, 3, 5, 7, 11 }; // use initializer list to initialize the fixed array

    //Omitted length
    int array[5] {0 ,1 , 2, 3, 4}; //default length = 5
    int omittedArray[] {0 ,1 ,2 ,3 ,4}; //let the length of the list set the length of array

    int testScore[max_students] {};
    testScore[StudentNames::stan] = 10;

    //Enum classes dont have conversion to int
    //So if you want to convert those

    int newTestScore[static_cast<int>(NewStudentsNames::max_students)];
    newTestScore[static_cast<int>(NewStudentsNames::stan)] = 76;

    //Passing arrays to functions
    int value {1};
    std::cout << "before Value: " << value << '\n';
    
    passValue(value);
    std::cout << "after passing: " << value << '\n';

    int passPrime[5] {2, 3, 5, 7, 11};

    std::cout << "before passing: " << passPrime[0]
     << ' ' << passPrime[1]<<' ' << passPrime[2]<<' ' << passPrime[3]<< ' ' << passPrime[4] << '\n';

    passArray(passPrime);

    std::cout << "After passing: " << passPrime[0]
     << ' ' << passPrime[1]<<' ' << passPrime[2]<<' ' << passPrime[3]<< ' ' << passPrime[4] << '\n';

    //Determining the length of the array (C++ 17)
    int arrayOne[] {1 , 1, 2, 3, 5, 8, 13, 21};
    // std::cout << "The array has " << std::size(arrayOne) << "elements";

}