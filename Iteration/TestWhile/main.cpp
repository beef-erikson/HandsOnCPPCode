#include <iostream>
using namespace std;

// Demonstrates a while loop to handle incorrect inputs
int main() {
    int number{}, count{};

    cout << "Enter number (1 - 12): ";
    cin >> number;

    while (number < 1 || number > 12)
    {
        count++;
        cout << "Invalid. Number must be in the range of 1 to 12.\n";
        cout << "Re-enter number: ";
        cin >> number;
    }
    cout << "\nNumber accepted was " << number << "." << endl;
    cout << "You entered an invalid response " << count << " times.\n" << endl;
    return 0;
}
