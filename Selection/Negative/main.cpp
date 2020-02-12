#include <iostream>
using namespace std;

// Read in integer value and returns negative if less than 0.
int main() {
    int no1{};

    cout << "Enter a value: ";
    cin >> no1;
    if (no1 < 0)
    {
        cout << "The number is negative." << endl;
    }
    cout << "The number is " << no1;

    return 0;
}
