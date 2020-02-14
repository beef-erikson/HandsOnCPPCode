#include <iostream>
#include "cstdlib"
#include "ctime"

using namespace std;

int main() {
    int number{}, guess{};
    int numberOfGuesses{0};

    // Generates random between 1 and 10
    srand(static_cast<unsigned>(time(nullptr)));
    number = rand() % 10 + 1;

    // Gets user's guess and display answer
    do {
        cout << "Guess the number (1 - 10): ";
        cin >> guess;

        if (guess < 1 || guess > 10)
            cout << "Number is out of range. Guess 1 to 10.\n";
        else if (guess < number) {
            numberOfGuesses++;
            cout << "Your guess was too low with " << guess << "." << endl;
        }
        else if (guess > number) {
            numberOfGuesses++;
            cout << "Your guess was too high with " << guess << "." << endl;
        }
        else
            cout << "\nYou guessed correctly with " << guess << "!" << endl;
    } while (guess != number);

    cout << "Congrats! It took you " << numberOfGuesses << " guesses!\n";

    return 0;
}
