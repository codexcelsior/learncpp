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

    

}
