#include <iostream>
using namespace std;

int main()
{
	int no1, no2, total;

	//*** Read values from the keyboard ***
	cout << "Enter first number : ";
	cin >> no1;
	cout << "Enter second number : ";
	cin >> no2;
	//*** Calculate total ***
	total = no1 + no2;
	//*** Display result ***
	cout << "The sum of " << no1 << " and " << no2 << " is "
		<< total << endl;
}