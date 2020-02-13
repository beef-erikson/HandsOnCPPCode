#include <iostream>
using namespace std;

// Reads integer and outputs 'OK' if number is 9 or 14
int main() {
    int num{};

    cout << "Enter a number: ";
    cin >> num;

    if (num == 9 || num == 14)
    {
        cout << "OK";
    }

    return 0;
}
