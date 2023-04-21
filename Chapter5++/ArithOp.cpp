#include <iostream>

int main()
{
    int x{7};
    int y{4};

    std::cout << "int / int =" << x / y << "\n";
    std::cout << "double / int =" << static_cast<double>(x) / y;
    std::cout << "int / double =" << x / static_cast<double>(y);
    std::cout << "double / double = " << static_cast<double>(x) / static_cast<double>(y) << '\n';



    std::cout << "Enter a divisor: ";
	double  x1{};
	std::cin >> x1;

	std::cout << "12 / " << x << " = " << 12 / x1 << '\n';

	return 0;

}