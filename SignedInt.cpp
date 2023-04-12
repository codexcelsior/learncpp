short s;      // prefer "short" instead of "short int"
int i;
long l;       // prefer "long" instead of "long int"
long long ll; // prefer "long long" instead of "long long int"
signed short ss;
signed int si;
signed long sl;
signed long long sll;

#include <iostream>

int main()
{
    std::cout << 20 / 4 << '\n';
    return 0;

    std::cout << 8 / 5 << '\n'; //Produces 1 or undefined behaviour
    return 0;
}

