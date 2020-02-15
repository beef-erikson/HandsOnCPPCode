#include <iostream>

using namespace std;

// Counts a number from 1 to x, where x is the number entered
int main() {
    int maxNumber{};
    cout << "Enter a number to count up to (between 0 and 50): ";
    cin >> maxNumber;

    // Checks validity of values
    while (maxNumber < 0 || maxNumber > 50) {
        cout << "Invalid number.\nMust be between 0 and 50: ";
        cin >> maxNumber;
    }

    // Counts
    for (int i = 1; i <= maxNumber; i++) {
        cout << i << " ";
    }

    cout << endl;
    return 0;
}
