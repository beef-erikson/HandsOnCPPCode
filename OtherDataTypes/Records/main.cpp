#include <iostream>
#include <iomanip>

using namespace std;

// Struct example of creating a student record.
int main() {
    // Struct for students
    struct StudentType {
        char name[31]{};
        char gender{};
        int age{};
        int grade[5]{};
    };

    // Sets student information
    StudentType student[3]{
            {"Pip",     'M', 17, {
                                         23, 29, 31, 47, 59
                                 }},

            {"Estella", 'F', 19, {
                                         31, 38, 42, 47, 59
                                 }},
            {"Clara",   'F', 20, {
                                         18, 21, 27, 29, 25
                                 }},
    };

    // Displays name, age, gender and grades for each student.
    for (StudentType v : student) {
        cout << setw(20) << v.name << " " << v.gender << " "
             << v.age << endl;
        for (int exam : v.grade)
            cout << setw(3) << exam << " ";
        cout << endl;
    }

    return 0;
}
