#include <iostream>
using namespace std;

// Displays entered integer in decimal and hexidecimal
int main() {
    int number{};
    cout << "Enter integer: ";
    cin >> number;
    cout << endl << "Integer in decimal: " << dec << number << endl;
    cout << "Integer in hexidecimal: " << hex << number << endl;

    return 0;
}
