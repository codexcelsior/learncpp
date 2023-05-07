#include <iostream>
#include <string>


template <typename T>
T max(T x, T y)
{
    return (x < y) ? y : x;
}

template<>
int max<int> (int x, int y)
{
    return (x < y) ? y : x;
}

//Funct with non Template parametters
template <typename T>
int someFcn(T x, double y)
{
    return 5;
}

template <typename T>
T addOne(T x)
{
    return x + 1;
}



int main()
{
    std::cout << max<int>(1, 2) << '\n'; // instantiates and calls function max<int>(int, int)

    std::cout << max<int>(1, 2) << '\n';    // instantiates and calls function max<int>(int, int)
    std::cout << max<int>(4, 3) << '\n';    // calls already instantiated function max<int>(int, int)
    std::cout << max<double>(1, 2) << '\n'; // instantiates and calls function max<double>(double, double)


    std::cout << addOne(1) << '\n';   // calls addOne<int>(int)
    std::cout << addOne(2.3) << '\n'; // calls addOne<double>(double)


    

    return 0;
}

