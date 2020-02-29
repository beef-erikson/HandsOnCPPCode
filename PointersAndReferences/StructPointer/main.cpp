#include <iostream>

using namespace std;

struct DateType {
    int day;
    int month;
    int year;
};

// Using a pointer with a struct
int main() {
    DateType now;
    DateType *dtptr{&now};

    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &dtptr->month, &dtptr->day, &dtptr->year);
    printf("Entered value: %d/%d/%d", dtptr->month, dtptr->day, dtptr->year);

    return 0;
}
