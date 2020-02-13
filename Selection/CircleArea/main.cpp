#include <iostream>
#include "cmath"
using namespace std;

// Finds the radius of a circle based on inputted radius
int main() {
    double radius{}, area{};

    cout << "Enter the radius of a circle: ";
    cin >> radius;
    if (radius >= 0)
    {
        area = M_PI * radius * radius;
        cout << "The area of a circle whose radius is " << radius << " is "
            << area << endl;
    }
    else
    {
        cout << "Invalid radius. Negative number entered.";
    }

    return 0;
}
