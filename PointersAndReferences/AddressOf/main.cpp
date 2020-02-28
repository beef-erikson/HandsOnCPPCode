#include <iostream>
#include <iomanip>

using namespace std;

// Demonstrates the usage of a reference and pointer declaration
int main() {
    int num {21};
    cout << "Address of num: " << setw(10) << &num << endl;

    int *intptr {};
    float *floatptr {};

    return 0;
}
