#include <iostream>
#include <iomanip>
using namespace std;

// Add two values of minutes and seconds and print totals.
int main() {
    int minutes1{}, minutes2{};
    int seconds1{}, seconds2{};
    int totalMinutes{}, totalSeconds{};

    cout << "Enter the first time (mm ss): ";
    cin >> minutes1 >> seconds1;
    cout << "Enter the second time (mm ss): ";
    cin >> minutes2 >> seconds2;

    totalSeconds = seconds1 + seconds2;
    if (totalSeconds >= 60)
    {
        totalMinutes += totalSeconds / 60;
        totalSeconds -= totalMinutes * 60;
    }

    totalMinutes += minutes1 + minutes2;

    cout << endl << "Total minutes: " << totalMinutes << setw(20)
        << "Total seconds: " << totalSeconds << endl;
    cout << setfill('=') << setw(40) << "" << setfill(' ') << endl;

    return 0;
}
