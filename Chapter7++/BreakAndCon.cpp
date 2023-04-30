#include <iostream>



void printMath(int x, int y, char ch)
{
    switch(ch)
    {
        case '+':
            std::cout << x << " + " << y << " = " << x + y << '\n';
        break; //This will stop the fall through effects after checking 
        case '-':
            std::cout << x << " - " << y << " = " << x - y << '\n';
        break;
        case '*':
            std::cout << x << " * " << y << " = " << x * y << '\n';
        break; // don't fall-through to next case
        case '/':
            std::cout << x << " / " << y << " = " << x / y << '\n';
        break;
    }

    

    
}



int main()
{
    printMath(2, 3, '+');


    //Breaking for loop
    int sum{ 0 };
    for (int count{ 0 }; count < 10; ++count)
    {
        std::cout << "Enter a number to add, or 0 to exit: ";
        int num{};
        std::cin >> num;

        if (num == 0)
            break; //break out of for loop

        sum += num;
    }

    std::cout << "The sum of all the numbers you entered is: " << sum << '\n'; //this will continue to print out



    //Continue

    for (int count{0}; count < 10; ++count)
    {
        if ((count % 4) == 0) //if this iteration is divisble by 4 skip this iteration
            continue;
        
        std::cout << count << "\n";
    }


    int count{ 0 }; // count how many times the loop iterates
    bool keepLooping { true }; // controls whether the loop ends or not
    while (keepLooping)
    {
        std::cout << "Enter 'e' to exit this loop or any other character to continue: ";
        char ch{};
        std::cin >> ch;

        if (ch == 'e')
            keepLooping = false; //breakl is better in this context 
        else
        {
            ++count;
            std::cout << "We've iterated " << count << " times\n";
        }
    }







    return 0;
}