
#include <iostream>

// Define a new unscoped enumeration named Color
enum Color //This enum is defined in the global namespace
{
    // Here are the enumerators
    // These symbolic constants define all the possible values this type can hold
    // Each enumerator is separated by a comma, not a semicolon
    red, //red is put into the global namespace
    green,
    blue, // trailing comma optional but recommended
}; // the enum definition must end with a semicolon


enum DaysOfWeek
{
    sunday,
    monday,
    tuesday,
    wednesday,
    thursday,
    friday,
    saturday,
};

enum CardinalDirections
{
    north,
    east,
    south,
    west,
};

enum CardSuits
{
    clubs,
    diamonds,
    hearts,
    spades,
};

enum FileReadResult
{
    readResultSuccess,
    readResultErrorFileOpen,
    readResultErrorFileRead,
    readResultErrorFileParse,
};


//Quiz 1 + Quiz 2
namespace monster{
    enum MonsterType
    {
        orcs,
        goblins,
        trolls,
        ogres,
        skeletons,
    };
}

int main()
{
    // Define a few variables of enumerated type Color
    Color apple { red };   // my apple is red
    // Color shirt { green }; // my shirt is green
    Color cup { blue };    // my cup is blue

    //Comparing againt enumerators
    Color shirt { blue };

    if (shirt == blue)
        std::cout << "Your shirt is blue";
    else 
        std::cout << "Your shirt is not blue";
    

    monster::MonsterType Troll {monster::trolls};

    return 0;
}
