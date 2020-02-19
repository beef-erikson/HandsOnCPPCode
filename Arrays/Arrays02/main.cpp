#include <iostream>

using namespace std;

// Uses sizeof to display contents of array
int main() {
    int list[] {7, 5, 2, 9, 1, 1, 3, 6, 5, 8};

    // Before
    for (int i{0}; i < sizeof(list) / sizeof(list[0]); i++)
    {
        cout << list[i] << " ";
    }
    cout << endl;

    // After
    for (int i: list)
        cout << i << " ";
    cout << endl;

    return 0;
}
