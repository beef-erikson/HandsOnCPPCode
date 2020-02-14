#include <iostream>
using namespace std;

// Usage of a test driver for switch statement
int main() {
    int dayOfWeek;
    cout << "Enter value for dayOfWeek: ";
    cin >> dayOfWeek;

    // Code to test
    switch (dayOfWeek)
    {
        case 0:
            cout << "Sunday\n";
            break;
        case 1:
            cout << "Monday\n";
            break;
        case 2:
            cout << "Tuesday\n";
            break;
        case 3:
            cout << "Wednesday\n";
            break;
        case 4:
            cout << "Thursday\n";
            break;
        case 5:
            cout << "Friday\n";
            break;
        case 6:
            cout << "Saturday\n";
            break;
        default:
            cout << "Invalid value for dayOfWeek.\n";
            cout << "Value is: " << dayOfWeek << endl;
    }

    return 0;
}
