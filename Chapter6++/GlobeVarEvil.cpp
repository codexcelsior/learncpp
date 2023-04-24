// constexpr double gravity { 9.8 }; // unclear if this is a local or global variable from the name

// int main()
// {
//     return 0;
// }

#include <iostream>

namespace constants
{
    constexpr double gravity { 9.8 };
}

double getGravity() // this function can be exported to other files to access the global outside of this file
{
    // We could add logic here if needed later
    // or change the implementation transparently to the callers
    return constants::gravity;
}


// This function can calculate the instant velocity for any gravity value (more useful)
double instantVelocity(int time, double gravity)
{
    return gravity * time;
}

int main()
{
    std::cout << instantVelocity(5, constants::gravity); // pass our constant to the function as a parameter
    return 0;
}