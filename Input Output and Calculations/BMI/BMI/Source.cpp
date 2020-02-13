#include <iostream>
using namespace std;

int main()
{
	int age, weight, height;
	int BMI{};

	cout << "Enter age: ";
	cin >> age;
	cout << "Enter weight in lbs: ";
	cin >> weight;
	cout << "Enter height in inches: ";
	cin >> height;
	
	BMI = weight * 705 / height / height;
	cout << endl << "Your BMI is: " << BMI << endl;
	
	if (BMI < 18.5)
		cout << "You are underweight\n";
	if (BMI >= 18.5 && BMI < 25)
		cout << "You are a normal weight\n";
	if (BMI >= 25 && BMI < 30)
		cout << "You are overweight\n";
	if (BMI > 30)
		cout << "You are obese\n";
}