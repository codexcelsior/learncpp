#include <iostream>

int sumTo(int times)
{
    int sum{0};
    for (int i {1}; i <= times; i++)
       sum += i;
    return sum;
}


int main()
{
    sumTo(5);
    return 0;
}