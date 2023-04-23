#include <iostream>


namespace goo
{
    int doSmth(int x, int y)
    {
        return x - y;
    }
}

void print()
{
    std::cout << "Hello \n";
}

namespace foo
{
    int print(int x, int y)
    {
        return x + y;
    }

    void printHellothere()
    {
        print(1 , 2);
        ::print();
    }
}



int main()
{
    std::cout << goo::doSmth(4 , 3) << "\n";

    foo::print(1 , 2); //Call print from Foo namesapce

    ::print(); //Call print from global namespace

    return 0;


}