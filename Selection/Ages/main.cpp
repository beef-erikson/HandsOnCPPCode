#include <iostream>
using namespace std;

// Read in gender and age values, returning retired male if male and over 65.
int main() {
    char gender{};
    int age{};

    cout << "Enter gender (M or F): ";
    cin >> gender;
    cout << "Enter age: ";
    cin >> age;

    if (gender == 'M')
    {
        if (age > 65)
            cout << "Retired Male\n";
    }
    else
        cout << "Female\n";

    return 0;
}
