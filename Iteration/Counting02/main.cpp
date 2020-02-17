#include <iostream>

using namespace std;

// Outputs 0 to 5 three times. Note the break statement in the inner loop.
int main() {
    for (int tens = 0; tens <= 2; tens++)
    {
        cout << tens << endl;
        for (int units = 0; units <= 9; units++)
        {
            cout << " " << units << endl;
            if (units == 5)
                break;
        }
    }

    return 0;
}
