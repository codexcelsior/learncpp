#include <iostream>
#include <random>


void RNGgame()
{
std::random_device rd;
std::mt19937 mt{rd()};
std::uniform_int_distribution<> die100{1, 100};

int goal = die100(mt);

std::cout << "Let's play a game. I'm thinking of a number between 1 and 100. You have 7 tries to guess what it is. \n";

bool playerCondition {};

for (int count{1}; count <= 7; count++)
{
    std::cout << "Guess " << "#" << count << ": ";
    int user{};
    std::cin >> user;

    if (user < goal)
        std::cout << "Your guess is too low. \n";  
    else if (user > goal)
        std::cout << "Your guess is too high. \n";  
    else if (user == goal)
    {
        std::cout << "Correct! You win! \n";
        break;
    }
    else
        std::cout << "Sorry, you lose. The correct number was " << goal << "\n";
}
}



int main()
{
    while (true)
    {    
        RNGgame();
        char playerOpinion {' '};
        std::cout << "Would you like to play again (y/n)? ";
        std::cin >> playerOpinion;
        
        while (playerOpinion != 'y' && playerOpinion != 'n')
            {
                std::cout << "Would you like to play again (y/n)? ";
                std::cin >> playerOpinion; 
            }
        if (playerOpinion == 'y')
            RNGgame();
        else
            break;
    }

}