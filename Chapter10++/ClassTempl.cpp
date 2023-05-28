#include <iostream>
#include <utility>

template <typename T>
T max(T x, T y)
{
    return (x < y) ? y : x;
}

struct Pair
{
    int first{};
    int second{};
};

constexpr int max(Pair p)
{
    return (p.first > p.second ? p.first : p.second);
}



//Class template 
template <typename T>
struct PairNew
{
    T first{};
    T second{};
};

//Using class template in function 

constexpr int max(PairNew<int> p)
{
    return (p.first < p.second ? p.second : p.first);
}

constexpr double max(PairNew<double> p)
{
    return (p.first < p.second ? p.second : p.first);
}

//Class templts have both template type and non template type 

template <typename T>
struct Foo
{
    T x {};
    int second {};
};





//Overloaded type template 

template <typename T>
constexpr T max(PairNew<T> p)
{
    return (p.first < p.second ? p.second : p.first);
}


//class templates with different template types
template <typename T, typename U>
struct PairSecond
{
    T first{};
    U second{};
};

//std::pair

template <typename T, typename U>
void print(std::pair<T, U> p)
{
    std::cout << p.first << ' ' << p.second << '\n';
}



int main()
{
    std::cout << max(5, 6);     // instantiates and calls max<int>(int, int)
    std::cout << '\n';
    std::cout << max(1.2, 3.4); // instantiates and calls max<double>(double, double)


    Pair p;
    std::cout << max(p) << "is larger \n";

    //Instantiation 
    PairNew<int> p1{5 , 6};
    std::cout << p1.first << p1.second <<'\n';

    PairNew<double> p2 {1.2, 3.4};
    std::cout << p2.first << p2.second << '\n';

    PairNew<double> p3{7.8, 7.9};
    std::cout << p3.first << p3.second << '\n';


    return 0;
}