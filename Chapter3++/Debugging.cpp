#include <iostream>

#define ENABLE_DEBUG // comment out to disable debugging

int getUserInput()
{
#ifdef ENABLE_DEBUG
std::cerr << "getUserInput() called\n"; //PRINTING OUT ERRORS USING CHHAR ERRORS 
#endif
	std::cout << "Enter a number: ";
	int x{};
	std::cin >> x;
	return x;
}

int main()
{
#ifdef ENABLE_DEBUG
std::cerr << "main() called\n"; //PRINTING OUT ERRORS USING CHHAR ERRORS 
#endif
    int x{ getUserInput() };
    std::cout << "You entered: " << x;

    return 0;
}