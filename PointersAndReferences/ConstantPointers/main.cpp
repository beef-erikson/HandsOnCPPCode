#include <iostream>

using namespace std;

// Using constants with pointers
int main() {
    float x{4.23};
    const int MAX{20};
    const double TAX{0.06};

    float *fptr{&x};
    const int *iptr{&MAX};
    const double *const dptr{&TAX};

    cout << *fptr << "   " << *iptr << "   " << *dptr << endl;

    return 0;
}
