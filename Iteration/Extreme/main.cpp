#include <iostream>

using namespace std;

// Finds the smallest and largest number from 8 inputted numbers
int main() {
    int number{};
    int smallest{}, largest{};

    cout << "Enter a number: ";
    cin >> number;
    largest = smallest = number;

    for (int i = 0; i < 7; i++)
    {
        cout << "enter another number: ";
        cin >> number;

        if (number < smallest)
            smallest = number;
        else if (number > largest)
            largest = number;
    }

    cout << "The smallest number entered is: " << smallest << endl;
    cout << "The largest number entered is: " << largest << endl;

    return 0;
}
