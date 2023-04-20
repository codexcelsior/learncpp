#include <iostream>


int sec()
{
    int x{};
    std::cout << "Enter the time of  the ball after x seconds falling:";
    std::cin >> x;
    return x;
}

int height()
{
    int height{};
    std::cout << "Enter the height of the tower in meters: ";
    std::cin >> height;
    return height;
}

void afterFall(int height , int Sec)
{
    constexpr double gravity{9.8};
    for (int t = 0; t < Sec ; t++)
        std::cout << "At " << t << " seconds, the ball is at height: " << height - (t * t * gravity / 2) << "   meters\n";
    std::cout << "At " << Sec << " seconds, the ball is on the ground\n";

}


int main()
{
    int Height = height();
    int Sec = sec();
    afterFall(Height, Sec);
}