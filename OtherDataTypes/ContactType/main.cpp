#include <iostream>

using namespace std;
int main() {
    struct ContactType
    {
        char name[40];
        char email1[60];
        char email2[60];
        char email3[60];
        char mobile[15];
        char home[15];
    };

    ContactType c1{}, c2{}, c3{};

    return 0;
}
