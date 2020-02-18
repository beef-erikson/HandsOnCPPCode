#include <iostream>

using namespace std;

// Reads in numbers into an array and outputs the values using loops
int main() {
    const int SIZE {7};     // Change this to alter array size
    int numbers[SIZE];

    for (int i{0}; i < SIZE; i++) {
        cout << "Enter a number: ";
        cin >> numbers[i];
    }

    cout << endl;
    for (int i{0}; i < SIZE; i++) {
        cout << "The number in array element " << i << " is " << numbers[i]
             << endl;
    }
    return 0;
}
