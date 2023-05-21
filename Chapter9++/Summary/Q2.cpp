#include <iostream>

int main()
{
	int x{ 5 };
	int y{ 6 };

	int& ref{ x }; // ref -> x = 5
	++ref; // (ref -> x) + 1 = 5 + 1 = 6
	ref = y; //(ref -> x) = 6 = y = 6
	++ref; //(ref -> x) + 1 = 6 + 1 = 7
 
 	std::cout << x << ' ' << y << "\n"; //7 ' ' 6

	return 0;
}