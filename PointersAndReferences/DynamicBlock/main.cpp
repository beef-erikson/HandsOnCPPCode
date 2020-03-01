#include <iostream>

using namespace std;

// Sets up a memory block of integers
int main() {
    int *iptr = {new int[4]{}};
    cout << "Enter 4 integers: ";
    scanf("%d %d %d %d", &iptr[0], &iptr[1], &iptr[2], &iptr[3]);
    printf("You have entered: %d %d %d %d", iptr[0], iptr[1], iptr[2], iptr[3]);

    delete[] iptr;
    iptr = nullptr;

    return 0;
}
