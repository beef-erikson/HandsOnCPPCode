#include <iostream>

using namespace std;

// Using dynamic memory allocation
int main() {
    // Defines pointer and allocates space
    int *iptr {new int(20)};
    cout << *iptr << endl;

    // Stores value in allocated space
    *iptr = 12;

    // Displays value stored
    cout << *iptr << endl;

    return 0;
}
