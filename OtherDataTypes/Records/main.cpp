#include <iostream>

using namespace std;

// Struct example of creating a student record.
int main() {
    struct StudentType {
        char name[31]{};
        char gender{};
        int age{};
        int grade[5]{};
    };

    StudentType s1 = {"Pip", 'M', 17, {
            23, 29, 31, 47, 59
    }};
    StudentType s2 = {"Estella", 'F', 19, {
            31, 38, 42, 47, 59
    }};
    StudentType s3 = {"Clara", 'F', 20, {
        18, 21, 27, 29, 25
    }};

    return 0;
}
