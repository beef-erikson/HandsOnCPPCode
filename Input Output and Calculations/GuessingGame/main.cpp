#include <iostream>
#include "cstdlib"
#include "ctime"
using namespace std;

int main() {
    int number{}, guess{};

    // Generates random between 1 and 10
    srand(static_cast<unsigned>(time(0)));
    number = rand() % 10 + 1;

    // Gets user's guess and display answer
    cout << "Guess the number (1 - 10): ";
    cin >> guess;
    cout << "The number was " << number << endl;
    if (guess < number)
        cout << "Your guess was too low with " << guess << "." << endl;
    else if (guess > number)
        cout << "Your guess was too high with " << guess << "." << endl;
    else
        cout << "You guessed correctly with " << guess << "!" << endl;

    return 0;
}
