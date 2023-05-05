#include <cstdint>
#include <iostream>
#include "mytypes.h"
#include <vector> // for std::vector
#include <utility> // for std::pair

int printData();

int main()
{
    using Distance = double; // define Distance as an alias for type double

    Distance milesToDestination{ 3.4 }; // defines a variable of type double

    std::cout << milesToDestination << '\n'; // prints a double value



    using Miles = long; // define Miles as an alias for type long
    using Speed = long; // define Speed as an alias for type long

    Miles distance { 5 }; // distance is actually just a long
    Speed mhz  { 3200 };  // mhz is actually just a long

    // The following is syntactically valid (but semantically meaningless)
    distance = mhz;

    typedef long Miles; 
    using Miles = long;

    //Import preprocessed
    std::int8_t x {97}; //working as a char

    //Make harder datatype shorter and more explicit
    using VectPairSI = std::vector<std::pair<std::string, int>>; // make VectPairSI an alias for this crazy type


    using PrintError = int;
    PrintError printData();



    return 0;
}