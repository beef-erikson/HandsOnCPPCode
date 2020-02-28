#include <iostream>

using namespace std;

// Finds the smaller value of inputted numbers
int main() {
    int no1, no2, ans{};
    int *no1ptr{&no1};
    int *no2ptr{&no2};
    int *ansptr{&ans};

    cout << "Enter two numbers: ";
    cin >> *no1ptr >> *no2ptr;
    if (*no1ptr < *no2ptr)
        *ansptr = *no1ptr;
    else
        *ansptr = *no2ptr;
    cout << "Smaller value is " << *ansptr << endl;

    return 0;
}
