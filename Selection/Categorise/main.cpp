#include <iostream>
using namespace std;

// Categorize number with output based on entered number
int main() {
    int num{};

    cout << "Enter an integer value: ";
    cin >> num;

    if (num < 0)
        cout << "Negative number\n";
    if (num % 2 == 0)
        cout << "Even number\n";
    if (num >= -3 && num <= 3)
        cout << "Near Zero\n";

    return 0;
}
