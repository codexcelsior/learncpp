#include <iostream>

int main()
{
    // int numStudents{5};
    // int score0{ 84 };
    // int score1{ 92 };
    // int score2{ 76 };
    // int score3{ 81 };
    // int score4{ 56 };

    // int totalScore{score0 + score1 + score2 + score3 + score4};
    // auto averageScore{static_cast<double>(totalScore) / numStudents};

    int totalScore{0};

    constexpr int scores[] {84, 92, 76, 81, 56};
    const int numStudent{sizeof(scores) / sizeof(scores[0])};
    //Sizeof calculates all the bytes so we have to divide to get the real SIZE of all scores

    for (int students{0}; students < numStudent; students++)
    {
        totalScore += scores[students];
        auto averageScore{static_cast<double>(totalScore) / numStudent};
    }


    int maxScore{0};
    for (int students{0}; students < maxScore; ++students)
    {
        if (scores[students] > maxScore)
        {
            maxScore = scores[students];
        }
    }

    //Q1
    constexpr int array[]{ 4, 6, 7, 3, 8, 2, 1, 9, 5 };

    int arr_size = static_cast<int>(sizeof(array)) / sizeof(array[0]);  

    for (int index{0}; index < arr_size; ++index)
    {
        std::cout << array[index] << ' ';
    }

    //Q2
    int input{};
    
    constexpr int secndArray[]{ 4, 6, 7, 3, 8, 2, 1, 9, 5 };

    do
    {
      std::cout << "Enter a number between 1 and 9: ";
      std::cin >> input;

            if (std::cin.fail())
        {
            std::cin.clear(); // reset any error flags
            // std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // ignore any characters in the input buffer
        }
    } while (input > 9 || input <1);

    for (int index{0}; index < arr_size; ++index)
    {
        std::cout << array[index] << ' ';
        if (secndArray[index] == input)
        {
            std::cout <<  "The number " << input << " has index " <<  index << '\n';
        }
    }





}
