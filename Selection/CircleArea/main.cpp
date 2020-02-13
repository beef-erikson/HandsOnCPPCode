#include <iostream>
#include "cmath"
using namespace std;

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
       
    return 0;
}
