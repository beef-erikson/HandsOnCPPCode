#include <iostream>

using namespace std;

union SameAreaType {
    int no{};
    char ch[4];
};

// Displays the contents of all four bytes of an integer
int main() {
    // Assign value to no
    SameAreaType v;
    v.no = 0x12345678;

    // Display each byte
    for (int i{}; i <= 3; i++)
        cout << "Contents of byte " << i << " is " << hex
             << static_cast<int>(v.ch[i]) << endl;

    return 0;
}
