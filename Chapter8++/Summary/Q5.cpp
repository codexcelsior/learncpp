#include <iostream>

// write your add function template here

//Solution to A
template <typename T>
T add( T x, T y)
{
    return x + y;
}

//Solution to B
template <typename T>
T mult(T x, int y)
{
    return x * y;
}

//Solution to B
template <typename T>
T sub( T x, T y)
{
    return x - y;
}

template <typename T, typename Y>
T sub ( T x, Y y)
{
    return x - y;
}


//Solution to C
template<typename T, typename  U>
auto sub(T x, U y)
{
    return x - y;
}


int main()
{
	std::cout << add(2, 3) << '\n';
	std::cout << add(1.2, 3.4) << '\n';

    std::cout << mult(2, 3) << '\n';
	std::cout << mult(1.2, 3) << '\n';

	return 0;
}