#include <iostream>
#include <string>
#include <string_view>


enum class Pet
{
    cat,
    dog,
    pig,
    whale,
};

//Easing the conversion of scoped enumeratiors to int
enum class Animals
{
    chicken, // 0
    dog, // 1
    cat, // 2
    elephant, // 3
    duck, // 4
    snake, // 5

    maxAnimals,
};



// constexpr std::string_view getColor(Color color)
// {
//     using enum Color;

//     switch(color)
//     {
//         case black: return "black";
//         case red:   return "red";
//         case blue:  return "blue";
//         default:    return "???";       
//     }
// }


//Quiz 1

enum class Animal
{
    pig,
    chicken,
    goat,
    cat,
    dog,
    duck,
};



const std::string getAnimalName(Animal animal)
{
    switch (animal) 
    {
        case Animal::pig: return "pig";
        case Animal::chicken: return "chicken";
        case Animal::goat: return "goat";
        case Animal::cat: return "cat";
        case Animal::dog: return "dog";
        case Animal::duck: return "duk";
        default: return "???";
    }
}

void printNumberOfLegs(Animal animal)
{
    std::cout << "A " << getAnimalName(animal) << " has ";

    switch (animal)
    {
        case Animal::chicken:
        case Animal::duck:
            std::cout << 2;
            break;

        case Animal::pig:
        case Animal::goat:
        case Animal::cat:
        case Animal::dog:
            std::cout << 4;
            break;

        default:
            std::cout << "???";
            break;
    }

    std::cout << " legs.\n";
}


constexpr auto operator+(Animals a) noexcept
{
    return static_cast<std::underlying_type_t<Animals>>(a);
}


int main()
{
    enum class Color
    {
        red,
        blue,
    };

    enum class Fruit
    {
        banana,
        apple,
    };

    Color color { Color::red };
    Fruit fruit { Fruit::banana };

    // if (color == fruit) // The compiler will compare color and fruit as integers
    //     std::cout << "color and fruit are equal\n"; // and find they are equal!
    // else
    //     std::cout << "color and fruit are not equal\n";


    //Scoped dont implicitly convert to integers
    std::cout << "Enter a pet (0=cat, 1=dog, 2=pig, 3=whale): ";

    int input{};

    std::cin >> input;

    Pet pet{static_cast<Pet>(input)}; //static cast our integers to a Pet

    //Q1
    printNumberOfLegs(Animal::cat);
    printNumberOfLegs(Animal::chicken);

    return 0;
}