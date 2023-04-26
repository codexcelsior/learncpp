#include <iostream>
inline int min(int x, int y) 
{
    return (x < y) ? x : y;
}
//Do not use Inline function/ variable (external linkage in any mean) to avoid multiple definitions which are not identical 
//-> COMPILER WILL DO THIS FOR US

int main()
{
    std::cout << min(5, 6) << '\n';
    std::cout << min(3, 2) << '\n';
    return 0;
}