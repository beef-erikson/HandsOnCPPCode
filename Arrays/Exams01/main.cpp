#include <iostream>
#include <ctime>

using namespace std;

// Example of 2D array using student's exams
int main() {
    int exams[5][6];
    int student{};
    srand(static_cast<unsigned>(time(nullptr)));

    // Generate random scores between 0 and 100
    for (student = 0; student < 5; student++)
        for (int exam{0}; exam < 6; exam++)
            exams[student][exam] = rand() % 101;

    // Displays exams
    for (student = 0; student < 5; student++) {
        cout << "Student " << student + 1 << " test results: ";
        for (int exam{0}; exam < 6; exam++)
            cout << exams[student][exam] << " ";
        cout << endl;
    }


    return 0;
}
