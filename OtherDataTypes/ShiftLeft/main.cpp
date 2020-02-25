#include <iostream>

using namespace std;

// Uses bit shifting to determine bit value
int main() {
    short signed int value{};
    short signed int result{};

    cout << endl << "Enter a value (1 - 100): ";
    cin >> value;

    // Shifts bit 3 to position 15 (16 is the sign bit)
    result = value << 12;
    result < 0 ? cout << "Bit 3 is set to 1" : cout << "Bit 3 is set to 0";

    // Multiplies value by 16 multiplying by bits
    cout << endl << (value << 4) << endl;

    return 0;
}
