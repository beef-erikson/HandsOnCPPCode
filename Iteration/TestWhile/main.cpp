#include <iostream>
using namespace std;

// Demonstrates a while loop to handle incorrect inputs
int main() {
    int number{};

    cout << "Enter number (1 - 12): ";
    cin >> number;

    while (number < 1 || number > 12)
    {
        cout << "Invalid. Number must be in the range of 1 to 12.\n";
        cout << "Re-enter number: ";
        cin >> number;
    }
    cout << "Number accepted was " << number << endl;

    return 0;
}
