#include <iostream>

using namespace std;

struct DateType {
    int day;
    int month;
    int year;
};

// Demonstration of a void pointer on a struct
int main() {
    void *ptr;

    ptr = new DateType;

    // Stores values
    static_cast<DateType *>(ptr)->day = 23;
    static_cast<DateType *>(ptr)->month = 11;
    static_cast<DateType *>(ptr)->year = 1963;

    // Display values held
    cout << endl << static_cast<DateType *>(ptr)->month << "/" <<
         static_cast<DateType *>(ptr)->day << "/" <<
         static_cast<DateType *>(ptr)->year << endl;

    delete static_cast<DateType*>(ptr);
    ptr = nullptr;

    return 0;
}
