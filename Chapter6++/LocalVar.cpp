#include <iostream>

int main()
{

    int x { 2 }; // local variable, no linkage

    {
        int x { 3 }; // this identifier x refers to a different object than the previous x
    }

    // do not define y here

    {
        // y is only used inside this block, so define it here
        int y { 5 };
        std::cout << y << '\n';
    }

    // otherwise y could still be used here, where it's not needed


    int y { 5 }; // we're declaring y here because we need it in this outer block later

    {
        int x{};
        std::cin >> x;

        // if we declared y here, immediately before its actual first use...
        if (x == 4)
            y = 4;
    } // ... it would be destroyed here

    std::cout << y <<"\n"; // and we need y to exist here


    //Quizz

    std::cout << "Enter an integer: ";
    int smaller{};
    std::cin >> smaller;

    std::cout << "Enter a larger integer: ";
    int larger{};
    std::cin >> larger;

    int tempo{larger};

    if (smaller > larger)
    {
        std::cout << "Swapping the values" << "\n";
        larger = smaller;
        smaller  = tempo;
    } 


    std::cout << "The smaller value is " << smaller <<"\n" ;
    std::cout << "The larger value is " << larger <<"\n" ;

    return 0;
}