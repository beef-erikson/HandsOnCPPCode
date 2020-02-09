#include <iostream>
using namespace std;

int main()
{
	int day, month, year;
	cout << "Enter day, month, and year (dd mm yyyy): ";
	scanf_s("%d %d %d", &day, &month, &year);
	cout << "The date is: " << day << '/' << month << '/' << year << endl;
}