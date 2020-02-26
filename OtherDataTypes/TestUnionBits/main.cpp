#include <iostream>

using namespace std;

// Struct for a float value
struct FloatType {
    unsigned int significand    : 23;
    unsigned int exponent       : 8;
    unsigned int sign           : 1;
};

// Overlay a standard float and FloatType layout
union TestUnionType {
    float no;
    FloatType f;
};

// Assigns value TestUnionType and displays parts of the float field
int main() {
    TestUnionType v;
    v.no = -245.33;

    cout << "Sign " << v.f.sign << endl;
    cout  << "Exponent " << hex << v.f.exponent << endl;
    cout << "Significand " << v.f.significand << endl;

    return 0;
}
