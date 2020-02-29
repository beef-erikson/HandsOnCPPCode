#include <iostream>

using namespace std;

// Array pointer demonstration
int main() {
    int list[] {2, 7, 1, 9, 23};
    int *iptr (list);

    for (int i{0}; i < 5; i++)
        cout << *iptr++ << endl;

    return 0;
}
