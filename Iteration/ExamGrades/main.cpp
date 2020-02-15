#include <iostream>

using namespace std;

// Calculates average grade of exam scores
int main() {
    int grade{};
    int totalExamsGrade{};
    const int NO_OF_EXAMS = 3;      // Change this for number of exams taken

    for (int counter = 1; counter <= NO_OF_EXAMS; counter++) {
        cout << "Enter exam grade: ";
        cin >> grade;
        totalExamsGrade += grade;
    }

    cout << "\nTotal for all exams is " << totalExamsGrade << endl;
    cout << "The average grade is " << totalExamsGrade / NO_OF_EXAMS << endl;

    return 0;
}
