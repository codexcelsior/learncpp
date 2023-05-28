#include <utility>

template <typename T, typename U>
struct Pair
{
    T first{};
    U second{};
};

// template <typename T, typename U>
// Pair(T, U) -> Pair<T, U>;

int main()
{
    std::pair<int, int> p0 {1, 2};

    Pair <int, int> p1 {1, 2};

    // Pair p2{ 1, 2 };           // CTAD used to deduce Pair<int, int> from the initializers (C++17)

    // Pair p3;                   // uses default Pair<int, int>

}