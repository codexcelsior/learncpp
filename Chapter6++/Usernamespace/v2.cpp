#include <iostream>


namespace foo
{
    namespace goo // goo is a namespace inside the foo namespace
    {
        int add(int x, int y)
        {
            return x + y;
        }
    }
}

// namespace foo::goo
// {
//     int add(int x, int y)
//   {
//     return x + y;
//   }

// }

namespace v2
{
    int add(int x, int y)
    {
        return x + y;
    }
}

int main()
{
    namespace active = v2; // active now refers to v2

    std::cout << active::add(1, 2) << '\n'; // We don't have to change this

    return 0;
}