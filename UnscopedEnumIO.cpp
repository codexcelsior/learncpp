
#include <iostream>
#include <string_view>

enum Color
{
    black, // assigned 0
    red, // assigned 1
    blue, // assigned 2
    green, // assigned 3
    white, // assigned 4
    cyan, // assigned 5
    yellow, // assigned 6
    magenta, // assigned 7
};


enum Animal
{
    cat = -3,
    dog,         // assigned -2
    pig,         // assigned -1
    horse = 5,
    giraffe = 5, // shares same value as horse
    chicken,      // assigned 6
};

std::string getColor(Color color)
{
    switch (color)
    {
    case black: return "black";
    case red: return "red";
    case blue: return "blue";
    default: return "???";
    }
};

std::ostream& operator<<(std::ostream& out, Color color)
{
	switch (color)
	{
	case black: return out << "black";
	case red:   return out << "red";
	case blue:  return out << "blue";
	default:    return out << "???";
	}
}

int main()
{
    Color shirt{ blue }; // This actually stores the integral value 2

    std::cout << "Your shirt is " << getColor(shirt) << "\n";

    std::cout << "Your shirt is " << shirt << "\n";

    return 0;   
}