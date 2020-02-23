#include <iostream>
#include <ctime>

using namespace std;

// Uses a three dimensional array to hold student's exam scores in each semester
int main() {
    srand(static_cast<unsigned>(time(nullptr)));
    int exams[5][6][3]{};
    int grades{};

    // Random scores for assigned for all exams
    for (int student{0}; student < 5; student++) {
        for (int topic{0}; topic < 6; topic++) {
            for (int exam{0}; exam < 3; exam++)
                exams[student][topic][exam] = rand() % 101;
        }
    }

    // Traverse through array to report scores for each student in each class for each semester
    for (int student{0}; student < 5; student++) {
        cout << "Student " << student + 1 << endl;
        cout << "---------" << endl;
        for (int topic{0}; topic < 6; topic++) {
            grades = 0;
            switch (topic) {
                case 0:
                    cout << " taking Math with grades: ";
                    break;
                case 1:
                    cout << " taking English with grades: ";
                    break;
                case 2:
                    cout << " taking History with grades: ";
                    break;
                case 3:
                    cout << " taking Geography with grades: ";
                    break;
                case 4:
                    cout << " taking Physics with grades: ";
                    break;
                case 5:
                    cout << " taking Chemistry with grades: ";
                    break;
                default:
                    cout << " something went wrong, you shouldn't see this.";
                    break;
            }
            for (int v : exams[student][topic]) {
                cout << v << " ";
                grades += v;
            }
            cout << " with an average grade of: "
                 << grades / 3 << endl;
        }
        cout << endl;
    }

//    {
//            {
//                {0, 0, rand() % 101},
//                {0, 1, rand() % 101},
//                {0, 2, rand() % 101},
//                {0, 3, rand() % 101},
//                {0, 4, rand() % 101},
//                {0, 5, rand() % 101}
//            },
//            {
//                {1, 0, rand() % 101},
//                {1, 1, rand() % 101},
//                {1, 2, rand() % 101},
//                {1, 3, rand() % 101},
//                {1, 4, rand() % 101},
//                {1, 5, rand() % 101}
//
//            }
//    };
    return 0;
}
