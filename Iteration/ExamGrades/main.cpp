#include <iostream>
#include <iomanip>

using namespace std;

// Calculates average grade of exam scores for 3 students taking 5 exams
int main() {
    int grade{};
    int totalExamsGrade{};
    int allGrades{};
    const int NO_OF_EXAMS = 5;      // Change this for number of exams taken
    const int NO_OF_STUDENTS = 3;

    for (int i = 0; i < NO_OF_STUDENTS; i++) {
        cout << "\nStudent " << i + 1 << endl << "------------" << endl;

        for (int counter = 1; counter <= NO_OF_EXAMS; counter++) {
            cout << "Enter exam grade: ";
            cin >> grade;
            totalExamsGrade += grade;
        }

        cout << "\nTotal for all exams is " << totalExamsGrade << endl;
        cout << "The average grade is " << totalExamsGrade / NO_OF_EXAMS
             << endl;
        allGrades += totalExamsGrade;
        totalExamsGrade = 0;
    }
    cout << endl << setw(40) << setfill('-') << "";
    cout << endl << "Average of grades from all exams: "
         << allGrades / (NO_OF_EXAMS * NO_OF_STUDENTS);
    cout << endl << setw(40) << setfill('-') << "" << endl;

    return 0;
}
