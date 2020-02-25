#include <iostream>

using namespace std;

enum struct DaysType {Sunday, Monday, Tuesday, Wednesday, Thursday,
    Friday, Saturday};

// Uses enum for day of the week
int main() {

    // Set up matching string array
    char DaysOfTheWeek[7][10]{"Sunday", "Monday", "Tuesday", "Wednesday",
                              "Thursday", "Friday", "Saturday"};

    // Sets day and increments it by one day
    DaysType day = DaysType::Saturday;
    day = static_cast<DaysType>((static_cast<int>(day) + 1) % 7);
    cout << DaysOfTheWeek[static_cast<int>(day)] << endl;

    if (day == DaysType::Saturday || day == DaysType::Sunday)
        cout << "It's the weekend!" << endl;

    return 0;
}
