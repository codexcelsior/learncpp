#include <iostream>




int main() 
{

    int count {1};
    // while (count <= 10)
    //     {
    //         std::cout << count << ' ';
    //         ++count; 
    //     }

    // //Loop that will never stopp    
    // while (count <= 10) // this condition will never be false
    // {
    //     std::cout << count << ' '; // so this line will repeatedly execute
    // }

    // std::cout << '\n'; // this line will never execute


    // while (true)
    // {
    //     std::cout << "Loop again (y/n) ?";
    //     char c {};
    //     std::cin >> c;

    //     if (c == 'y')
    //         return 0; 
                   
    // }    

    // std::cout << "done! \n";
    
    // uint count1{ 10 };

    // //count starts here 10 down to 0
    // while (count1 >= 0)
    // {   
    //     if (count == 0)
    //     {
    //         std::cout << "blastoff";
    //     }
    //     else
    //     {
    //         std::cout << count << ' ';
    //     }
    //     --count;
    // }

    // std::cout << "\n";


    //DO SOMETHING FOR N ITERATIONS
    while ( count < 50)
    {
        if (count < 10)
        {
            std::cout << "0";
        }
        std::cout << count;

        if (count % 10 == 0)
        {
            std::cout << "\n";
        }

        ++count;
    }


    int outer {1};
    while (outer <= 5)
    {
        int inner {1};
        while (inner <= outer)      
        {
            std::cout << inner << ' '; 
            inner++;
        }

        std::cout << "\n"; 
        outer++;
    }
//TIPS FOR NEW PROGRAMMER: TREAT THE INNER OR EACH LINE FIRST THEN TREAT ROWS AFTER 


    return 0;  
}