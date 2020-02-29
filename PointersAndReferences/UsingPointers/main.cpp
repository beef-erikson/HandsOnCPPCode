#include <iostream>

using namespace std;

// Demonstrates uses of pointers
int main() {
    float fno{};
    float *fptr{&fno};
    float **pfptr{&fptr};

    cout << "Enter a floating point number: ";
    cin >> **pfptr;
    cout << "Value entered was: " << **pfptr;

    return 0;
}
