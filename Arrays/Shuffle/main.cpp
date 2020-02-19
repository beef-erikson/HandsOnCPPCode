#include <iostream>
#include <ctime>

using namespace std;

// Creates and shuffles a deck of cards
int main() {
    const int SIZE{52};     // Alter this for number of array elements
    int list[SIZE];         // Array for deck
    int sub1{}, sub2{};     // Used for swapping two array elements
    int temp{};             // Used for swapping of values for shuffle
    string suit{};          // Suit of card
    int value{};            // Value of card

    // Seed generator
    srand(static_cast<unsigned>(time(nullptr)));

    // Set up values in array
    for (int i{0}; i < SIZE; i++)
        list[i] = i;

    // Generates two random numbers and swaps array elements
    for (int i{1}; i <= 200; i++) {
        sub1 = rand() % SIZE;
        sub2 = rand() % SIZE;

        temp = list[sub1];
        list[sub1] = list[sub2];
        list[sub2] = temp;
    }

    // Displays shuffled card values
    cout << endl << "Order after shuffle: " << endl;
    for (int i{0}; i < 6; i++) {
        if (list[i] >= 0 && list[i] <= 12) {
            suit = " of Hearts";
            value = list[i] + 1;
        }
        else if (list[i] > 12 && list[i] <= 25) {
            suit = " of Diamonds";
            value = list[i] - 12;
        }
        else if (list[i] > 25 && list[i] <= 38) {
            suit = " of Spades";
            value = list[i] - 25;
        }
        else {
            suit = " of Clubs";
            value = list[i] - 38;
        }

        switch (value) {
            case 1:
                cout << "Ace" << suit << endl;
                break;
            case 11:
                cout << "Jack" << suit << endl;
                break;
            case 12:
                cout << "Queen" << suit << endl;
                break;
            case 13:
                cout << "King" << suit << endl;
                break;
            default:
                cout << value << suit << endl;
                break;
        }
    }
    cout << endl;

    return 0;
}
