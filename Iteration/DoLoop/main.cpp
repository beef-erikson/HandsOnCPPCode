#include <iostream>
using namespace std;

// Counts numbers entered and adds to sum until number 0 is entered
int main() {
    int sum{0}, number{};

    do
    {
        cout << "Enter number: ";
        cin >> number;
        sum += number;
        cout << "Current sum is: " << sum << endl;
    }
    while (number != 0);

    cout << "Total of values entered was " << sum << "." << endl;

    return 0;
}
