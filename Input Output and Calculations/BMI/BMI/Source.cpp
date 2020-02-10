#include <iostream>
using namespace std;

int main()
{
	int age, weight, height;

	cout << "Enter age: ";
	cin >> age;
	cout << "Enter weight in lbs: ";
	cin >> weight;
	cout << "Enter height in inches: ";
	cin >> height;
	
	cout << endl << "Your BMI is: " << weight * 705 / height / height << endl;
	cout << "A BMI over 25 is considered overweight." << endl;
}