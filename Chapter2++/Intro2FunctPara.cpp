#include <iostream>

void printDouble(int value) 
{
	std::cout << value << " doubled is " << value * 2 << "\n";
}

int getValue()
{
	std::cout << "Type your value: ";
	int input{};
	std::cin >> input;
	return input;
}

int add(int x, int y) 
{
	return x + y;
}

// void printValue(int x, int y)
// {
// 	std::cout << x << "\n";
// 	std::cout << y << "\n"; 

// }

// void doPrint()
// {
// 	std::cout << "In doPrint()\n";
// }

//More example: Multiply
int multiply(int z, int w)
{
	return z * w;
}

int doubleNumber(int x1) //Answer for question 4
{
	return x1 * 2;
}

int main()
{
	int num{getValue()};
	printDouble(num);
	// printValue(1, 7);
	std::cout << add(7, 8) << "\n";
	std::cout << multiply(10,  20) << "\n";
	//Question 4
	std::cout<< doubleNumber(10) << "\n";
	
	//Question 5
	std::cout << doubleNumber(getValue()) << "\n"; 
	
	
	
	
	return 0;



}

