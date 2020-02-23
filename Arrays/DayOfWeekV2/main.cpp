#include <iostream>

using namespace std;

// Calculates the day of the week based on the inputted date.
// Uses Zeller's Congruence to compute this.
int main() {
    int day, month, year;               // date entered
    int M, C, Y, modifiedYear;          // values required by formula
    int dayOfWeek;                      // day of the week on which date falls
    char days[7][10]= {"Sunday", "Monday", "Tuesday", "Wednesday",
                       "Thursday", "Friday", "Saturday"};
    // Gets date
    cout << endl << "Enter date in the format mm/dd/yyyy: ";
    scanf("%d/%d/%d", &month, &day, &year);

    // Calculations for formula
    M = (month + 9) % 12 + 1;
    modifiedYear = year - M / 11;
    C = modifiedYear / 100;
    Y = modifiedYear % 100;

    // Calculates day of week and displays it
    dayOfWeek = ((static_cast<int>(2.6 * M - 0.2) + day + Y + Y / 4 + C / 4
                  - 2 * C) % 7 + 7) % 7;

    cout << "This date fell on a ";
    switch (dayOfWeek) {
        case 0:
            cout << days[0] << endl;
            break;
        case 1:
            cout << days[1] << endl;
            break;
        case 2:
            cout << days[2] << endl;
            break;
        case 3:
            cout << days[3] << endl;
            break;
        case 4:
            cout << days[4] << endl;
            break;
        case 5:
            cout << days[5] << endl;
            break;
        case 6:
            cout << days[6] << endl;
            break;
        default:
            cout << "Error, you should not have hit this.\n";
            cout << "Invalid value is: " << dayOfWeek << endl;
    }

    return 0;
}
