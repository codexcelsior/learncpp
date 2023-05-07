#include <iostream>

void print(const int x)
{
     std::cout << x << '\n';
}

void print(double d)
{
     std::cout << d << '\n';
}

void print(std::string)
{

}



int main()
{
     print(5); // 5 is an int, so this matches print(int)
     print(6.7); // 6.7 is a double, so this matches print(double)

    //1) The compiler tries to find exact match 
    print(0); // exact match with print(int)
    print(3.4); // exact match with print(double)

    //Convert non-const to const 
    int x { 0 };
    print(x); // x trivially converted to const int

    //2) The compiler tries to do numeric promotion (No precision loss) 
    print('a'); // promoted to match print(int)
    print(true); // promoted to match print(int)
    print(4.5f); // promoted to match print(double)


    //3) The compiler tries to do numeric conversion (Precision may lose)
    print('a'); // 'a' converted to match print(double) if there is only print(double)

    //4) 



     return 0;
}

