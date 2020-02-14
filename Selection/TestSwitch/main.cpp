#include <iostream>

using namespace std;

// Demonstrates declaring a variable inside a switch statement
int main() {
    int value{};

    cout << "Enter value: ";
    cin >> value;
    switch (value) {
        case 1:
            cout << "Case 1 selected\n";
            break;
        case 2: {
            int x{0};
            cout << x << endl;
            cout << "Case 2 selected\n";
            break;
        }
        case 3:
            cout << "Case 3 selected\n";
        default:
            cout << "Default value hit\n";
    }
    return 0;
}
