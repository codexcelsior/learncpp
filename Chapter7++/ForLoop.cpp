#include <iostream>
#include <cstdint>



std::int64_t pow(int base, int exponent)
{
    std::int64_t total {1};

    for (int count{0}; count < exponent; count++)
    {
        total *= base;
    } 
    return total;
}




int main()
{

    //Add variable by 1 with each iteration
    for (int count{1}; count <= 10; count++)
    {
        std::cout << count << ' ';
    }
    std::cout << "\n";

    //Decrease variable by 1 with each iteration
    for (int count{ 9 }; count >= 0; --count)
    {
        std::cout << count << ' ' << '\n';

    }
    std::cout << '\n';

    //Add variable by 2 with each iteration
    for (int count{ 0 }; count <= 10; count += 2)
        std::cout << count << ' ';

    std::cout << '\n';


    // oops, we used operator< instead of operator<=
    //The desired results shall contain 1,2,3,4,5 not 1,2,3,4
    for (int count{ 1 }; count < 5; ++count)
    {
        std::cout << count << ' ';
    }

    std::cout << '\n';




    // for (;;) //Infinite loop = while (true)  
    // statement;

    for (int x{0}, y{9}; x < 10; ++x, --y)
    {
        std::cout << x << ' ' << y << "\n";
    }

    //Nester for loop
    for (char c{'a'}; c<= 'e'; c++)
    {
        std::cout << c;
        for (int i{0}; i < 3; i++)
        {
            std::cout << i;
        }
        std::cout << '\n';
    }

    return 0;
}