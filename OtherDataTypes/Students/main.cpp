#include <iostream>
#include <iomanip>
#include <string.h>
#include <ctime>

using namespace std;

// defines student struct info
struct StudentType {
    char name[31];
    char group[11];
    unsigned short int subjects{};
};

// Generates and displays student info
int main() {
    // Student's names
    char names[][31] = {
            "Bob", "Tina", "Tracy", "Mike", "Steve", "Bill", "Stacey",
            "Stu", "April", "Travis", "Matt", "Sally", "Vinnie", "Mandi",
            "Todd", "Ryan", "Val", "Nancy", "Sandra", "Amanda"
    };

    // Class names
    char classNames[][15] = {
            "English", "Math", "History", "Geography", "Physics", "Chemistry",
            "Biology", "Latin", "French", "German", "Spanish", "Mandarin",
            "Japanese", "IT", "Modern Studies", "Economics"
    };

    // Array of student details
    StudentType students[20];

    // Sets students up to struct from array
    for (int i{0}; i < 20; i++) {
        strcpy(students[i].name, names[i]);
        strcpy(students[i].group, "1A2014");
    }

    // Getting random values
    int power[16]{0};
    srand(static_cast<unsigned int>(time(nullptr)));

    // Gets 6 unique values for class for each student
    for (int student{}; student < 20; student++) {
        int coursePicked = 0;
        for (int subject{}; subject < 6; subject++) {
            unsigned short int course{};
            do
                course = 1 << rand() % 16;
            while ((coursePicked & course) == course);
            coursePicked += course;
        }
        students[student].subjects = coursePicked;
    }

    // Outputs students and their 6 courses
    cout << endl;
    for (int student{}; student < 20; student++) {
        // Student name and group
        cout << setw(20) << students[student].name << " " <<
             setw(8) << students[student].group << " ";
        cout << setw(15);

        // Student subjects
        for (int subject{}; subject < 16; subject++)
            if ((students[student].subjects & (1 << subject)) ==
                (1 << subject)) {
                cout << classNames[subject] << " ";
            }
        cout << endl;
    }

    // Outputs all students taking IT
    cout << endl << "These student are taking IT:   ";

    for (int student{}; student < 20; student++)
        if (students[student].subjects & 0x2000)
            cout << students[student].name << " ";
    cout << endl;

    return 0;
}
