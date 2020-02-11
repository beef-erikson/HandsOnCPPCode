#include <iostream>
#include <iomanip>
using namespace std;

// Adds two values of hours, minutes, seconds and print totals.
int main() {
    int hours1{}, hours2{};
    int minutes1{}, minutes2{};
    int seconds1{}, seconds2{};
    int totalHours{}, totalMinutes{}, totalSeconds{};

    cout << "Enter the first time (hh mm ss): ";
    cin >> hours1 >> minutes1 >> seconds1;
    cout << "Enter the second time (hh mm ss): ";
    cin >> hours2 >> minutes2 >> seconds2;

    // Calculate seconds
    totalSeconds = seconds1 + seconds2;
    if (totalSeconds >= 60)
    {
        totalMinutes += totalSeconds / 60;
        totalSeconds -= totalMinutes * 60;
    }

    // Calculate minutes
    totalMinutes += minutes1 + minutes2;
    if (totalMinutes >= 60)
    {
        totalHours += totalMinutes / 60;
        totalMinutes -= totalHours * 60;
    }

    // Calculate hours
    totalHours += hours1 + hours2;

    cout << endl << "Total time is " << totalHours << " hours " <<
        totalMinutes << " minutes and " << totalSeconds << " seconds." << endl;
    cout << setfill('=') << setw(50) << "" << endl;

    return 0;
}