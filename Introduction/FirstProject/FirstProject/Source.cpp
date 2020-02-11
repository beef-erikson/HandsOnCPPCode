#include <iostream>

int main()
{
	int no1, no2, total;

	//*** Read values from the keyboard ***
	std::cout << "Enter first number : ";
	std::cin >> no1;
	std::cout << "Enter second number : ";
	std::cin >> no2;
	//*** Calculate total ***
	total = no1 + no2;
	//*** Display result ***
	std::cout << "The sum of " << no1 << " and " << no2 << " is "
		<< total << std::endl;
}
