#include <iostream>
using namespace std;

int main()
{
	int day, month, year;
	cout << "Enter date (mm/dd/yyyy): ";
	scanf_s("%d/%d/%d", &month, &day, &year);
	cout << "The date is " << month << "/" << day << "/" << year << endl;
}