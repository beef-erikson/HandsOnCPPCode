#include <iostream>

using namespace std;

// Reads in 5 numbers into an array and outputs the values using loops
int main() {
    int numbers[5];

    for (int i{0}; i < 5; i++) {
        cout << "Enter a number: ";
        cin >> numbers[i];
    }

    cout << endl;
    for (int i{0}; i < 5; i++) {
        cout << "The number in array element " << i << " is " << numbers[i]
             << endl;
    }
    return 0;
}
