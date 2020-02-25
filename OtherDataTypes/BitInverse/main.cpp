#include <iostream>

using namespace std;

int main() {
    // Initialise variable
    short int v {0x00FF};

    // Complement variable's bits and outputs
    v = ~v;
    cout << "Signed value: " << v << endl;
    cout << "Unsigned value: " << static_cast<unsigned short int>(v) << endl;

    return 0;
}
