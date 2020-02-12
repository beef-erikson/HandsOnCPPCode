#include <iostream>

using namespace std;

// Calculates the day of the week based on the inputted date.
// Uses Zeller's Congruence to compute this.
int main() {
    int day, month, year;               // date entered
    int M, C, Y, modifiedYear;          // values required by formula
    int dayOfWeek;                      // day of the week on which date falls

    // Gets date
    cout << "Enter date in the format mm/dd/yyyy: ";
    scanf("%d/%d/%d", &month, &day, &year);

    // Calculations for formula
    M = (month - 9) % 12 + 1;
    modifiedYear = year - M / 11;
    C = modifiedYear / 100;
    Y = modifiedYear % 100;

    // Calculates day of week and displays it
    dayOfWeek = ((static_cast<int>(2.6 * M - 0.2) + day + Y + Y / 4 + C / 4
                  - 2 * C) % 7 + 7) % 7;
    printf("%d/%d/%d fell on a %d.\n", month, day, year, dayOfWeek);

    return 0;
}
