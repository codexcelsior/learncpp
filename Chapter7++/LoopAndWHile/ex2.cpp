#include <iostream>

int main()
{
    int outer{1};
    while (outer <= 5)
    {
        int inner{5};
        while (inner >= 1)
        {
            if (inner <= outer)
            {
                std::cout << inner << " ";
            }
            else 
            {
                std::cout << "  ";
            }
            inner--;
        }
        outer++;
        std::cout << "\n";
    }


//Second way

for (int outer {1} ; outer <=5; outer++)
{
    for (int inner {5}; inner >= 1; inner-- )
    {
        if (inner <= outer)
        {
            std::cout << inner << " ";
        }
        else 
        {
            std::cout << "  ";
        }
    }
    std::cout << "\n";
}







}

