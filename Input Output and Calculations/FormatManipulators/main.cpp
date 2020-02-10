#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // String formatting and filling
    string greeting = " Hello #100DaysOfCode! ";
    cout << endl << setfill('*') << setw(greeting.length() + 20)
        << greeting << setw(20) << "" << endl << endl;

    // Conversion to hex and oct
    cout << showbase;
    cout << hex << 320 << dec << endl;
    cout << oct << 453 << dec << endl;
    cout << noshowbase << endl << endl;

    // Precisions and notation
    double x{123.456789};
    cout << setprecision(4) << x << endl;
    cout << fixed;
    cout << setprecision(4) << x << endl;
    cout << scientific;
    cout << setprecision(5) << x << endl << endl;

    // Boolean values
    bool okay{true};
    cout << okay << endl;
    cout << boolalpha << okay << noboolalpha << endl << endl;

    // printf demonstration
    int no{12};
    printf("The value is %d\n", no);
    printf("Six characters long format %6d\n", no);
    double y{12.345678};
    printf ("Size of decimal place of 2: %8.2f\n", y);

    // printf flags
    printf("%+5d %#X %08.2f\n", 12, 255, 9.6732);
    printf("%-+5d\n", 12);
    printf("%%\n");

    return 0;
}
