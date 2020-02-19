#include <iostream>
#include <ctime>
#include <algorithm>

using namespace std;

// "Lottery" picker; ensures each 'pull' is unique and doesn't use same number
int main() {
    const int HIGHEST{49};          // Highest lottery number
    int lottery[HIGHEST + 1]{0};    // Possible values assigned a 0
    int number;                     // Currently generated number

    // Generates a random seed
    srand(static_cast<unsigned>(time(nullptr)));

    // Ensures each number has not been picked and chooses random pick
    for (int i{1}; i <= 6; i++)
    {
        do
            number = rand() % HIGHEST + 1;
        while (lottery[number] == 1);
        lottery[number] = 1;
    }

    // Displays lottery number in ascending order
    cout << "\nWinning numbers are: ";
    for (int c{1}; c <= HIGHEST; c++)
        if (lottery[c] == 1)
            cout << c << " ";

    cout << endl;

    return 0;
}
