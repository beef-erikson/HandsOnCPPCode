#include <iostream>

using namespace std;

// Using nested for loops on 2D arrays
int main() {
    int matrix[4][4]{};
    int value{};

    // First example
    value = 0;
    for (auto &column : matrix) {
        for (int row : column) {
            column[row] = value + 1;
            printf("%2d ", column[row]);
            value++;
        }
        cout << endl;
    }
    cout << endl;

    // Second example
    value = 0;
    for (int column = 0; column < 4; column++) {
        value = column;
        for (auto & row : matrix) {
            row[column] = value + 1;
            printf("%2d ", row[column]);
            value += 4;
        }

        cout << endl;
    }
    cout << endl;

    // Third example
    value = 16;
    for (int column = 4; column > 0; column--) {
        for (int row = 4; row > 0; row--) {
            matrix[column][row] = value;
            printf("%2d ", matrix[column][row]);
            value--;
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}
