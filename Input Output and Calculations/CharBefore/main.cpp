#include <iostream>
using namespace std;

// Increments char one space using pre-incrementing
int main() {
    char letter{};
    cout << "Enter letter to be incremented: ";
    cin >> letter;
    printf("Incremented letter: %c", --letter);
}
