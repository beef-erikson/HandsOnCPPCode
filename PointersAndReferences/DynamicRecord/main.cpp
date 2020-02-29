#include <iostream>

using namespace std;

struct DateType {
    int day;
    int month;
    int year;
};

// Dynamically allocates space for a struct
int main() {
    DateType *dtptr{new DateType};
    dtptr->day = 23;
    dtptr->month = 11;
    dtptr->year = 1963;

    printf("%d/%d/%d", dtptr->month, dtptr->day, dtptr->year);

    return 0;
}
