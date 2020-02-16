#include <iostream>

using namespace std;

// Adds inputted numbers to a total; loop ends when a value of 0 is entered
// or if 5 numbers have been entered
int main() {
    int no{};
    int count{};
    int total{0};

    for (count = 1; count <= 5; count++)
    {
        cout << "Enter number: ";
        cin >> no;

        if (no == 0)
            break;

        total += no;
    }
    cout << "Total of values entered was " << total << endl;

    return 0;
}
