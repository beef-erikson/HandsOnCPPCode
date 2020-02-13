#include <iostream>
using namespace std;

// Inputted numbers displays "Equal" or "Not Equal" appropriately
int main() {
    int num1{}, num2{};

    cout << "Enter two numbers with a space in between: ";
    cin >> num1 >> num2;

    if (num1 == num2)
    {
        cout << "Equal.";
    }
    else
    {
        cout << "Not Equal.";
    }

    return 0;
}
