#include <iostream>
using namespace std;

// If inputted number is between 1 and 12, outputs "Value Accepted"
int main() {
    int num{};

    cout << "Enter a number: ";
    cin >> num;

    if (num >= 1 && num <= 12)
    {
        cout << "Value Accepted.";
    }

    return 0;
}
