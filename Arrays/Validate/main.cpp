#include <iostream>

using namespace std;

// Checks if a date is valid
int main() {
    int month{}, day{}, year{};
    int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    cout << "Input month: ";
    cin >> month;
    cout << "Input day: ";
    cin >> day;
    cout << "Input year: ";
    cin >> year;

    // Checks year
    while (year <= 1752) {
        cout << "\nInvalid date.";
        return 0;
    }

    // Checks month
    while (month < 1 || month > 12) {
        cout << "\nInvalid date.";
        return 0;
    }

    // Checks day
    while ((day < 1 || day > daysInMonth[month])) {
        if (day > 28 && month == 2) {
            if (day == 28 + ((year % 4 == 0 && year % 100 != 0) ||
                                        (year % 400 == 0)))
                break;
            else {
                cout << "\nInvalid date";
                return 0;
            }
        }
        cout << "\nInvalid date";
        return 0;
    }

    printf("\nValid date of %d/%d/%d entered.\n", month, day, year);

    return 0;
}
