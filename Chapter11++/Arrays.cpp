#include <iostream>
// allocate 30 integer variables (each with a different name)
int testScoreStudent1{};
int testScoreStudent2{};
int testScoreStudent3{};
// ...
int testScoreStudent30{};

int testScore[30]{}; // allocate 30 integer variables in a fixed array



int array[5] {};


// enum Animals
// {
//     animal_cat = 2
// };


//Fixed Array Decl
enum DaysOfWeek
{
    monday,
    tuesday,
    wednesday,
    thursday,
    fridy,
    saturday,
    sunday,

    maxDaysOfWeeks
};


int main()
{
    int prime[5] {};
    prime[0] = 2; // The first element has index 0
    prime[1] = 3;
    prime[2] = 5;
    prime[3] = 7;
    prime[4] = 11; // The last element has index 4 (array length-1)

    std::cout << "The lowest prime number is: " << prime[0] << '\n';
    std::cout << "The sum of the first 5 primes is: " << prime[0] + prime[1] + prime[2] + prime[3] + prime[4] << '\n';


    //Array data types

    double batteryLifeHour[3] {};
    batteryLifeHour[0] = 2.0;
    batteryLifeHour[1] = 3.0;
    batteryLifeHour[2] = 4.3;

        std::cout << "The average battery life is " << (batteryLifeHour[0] + batteryLifeHour[1] + batteryLifeHour[2]) / 3.0 << " hour(s)\n";


    int array[5] {};

    array[1] = 7;

    // array[animal_cat] = 4;

    //Fixed array decl
    int numberOfLessonsPerday [7] {};

    constexpr int daysPerWeek{7};

    // int numberOfLessonsPerday[daysPerWeek] {};


    //Fixed Arr Decl
    // int numberOfLessonsPerday[maxDaysOfWeeks] {};

}

