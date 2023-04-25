#include <iostream>

void incrementAndPrint()
{
    static int s_value{ 1 }; // static duration via static keyword.  This initializer is only executed once.
    ++s_value;
    std::cout << s_value << '\n';
} // s_value is not destroyed here, but becomes inaccessible because it goes out of scope



int getInteger()
{
    static bool isFirstCalled{ true };
    if (isFirstCalled)
    {
        std::cout << "Enter an integer: ";
        isFirstCalled = false;
    }
    else {
        std::cout << "Enter an integer: ";
    }


    int x{};
    std::cin >> x;
    return x;

}


int main()
{
    incrementAndPrint();
    incrementAndPrint();
    incrementAndPrint();


    int a { getInteger() };
    int b { getInteger() };

    std::cout << a << " + " << b << " = " << a + b << "\n";


    return 0;
}

