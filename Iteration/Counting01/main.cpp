#include <iostream>

using namespace std;

// Demonstrates count with a nested for loop
int main() {
    for (int tens = 0; tens <= 9; tens++)
        for (int units = 0; units <= 9; units++)
        {
            cout << tens << units
            << endl;
        }

    return 0;
}
