#include <iostream>

template <typename T>
T max(T x, T y)
{
    return (x < y) ? y : x;
}

//Provide a specific (explicit) type template 
// double max(double x, double y)
// {
//     return (x < y) ? y : x;
// }

template<typename T, typename U> //C++ 20 for auto keyword
auto max(T x, U y)
{
    return (x < y) ? y : x;
}


int main()
{
    //Use static cast to make the function workable
    std::cout << max(1 , 2) << "\n";
    std::cout << max(static_cast<double>(2), 3.5); // compile error //Compile no longer error after explicitly get mulitiple typenames for template






}