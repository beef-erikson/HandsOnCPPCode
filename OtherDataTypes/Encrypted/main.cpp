#include <iostream>
#include <cstring>

using namespace std;

// Reads in a string and encrypts / decrypts using bitwise XOR
int main() {
    int value{};
    int encrypted;
    char str[70];

    // Gets and outputs value to encrypt
    cout << "Enter a string: ";
    gets(str);
    cout << "Value before encryption is: " << str << endl;

    // Encrypts and outputs value
    for (int i{}; i < strlen(str); i++) {
        value += str[i];
    }

    encrypted = value ^ 0x5A;
    cout << "Encrypted value is: " << encrypted << endl;

    // Decrypts back to original value and displays
    cout << "Decrypted value is: " << (encrypted ^ 0x5A) << endl;

    return 0;
}
