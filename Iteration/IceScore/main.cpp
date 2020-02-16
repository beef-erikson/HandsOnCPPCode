#include <iostream>

using namespace std;

// Get average score from n amount of judges (between 5 and 9)
int main() {
    int numJudges{};
    int score{}, highScore{}, lowScore{}, total{};

    // Gets number of judges
    do {
        cout << "Enter number of judges (between 5 and 9): ";
        cin >> numJudges;
    } while (numJudges < 5 || numJudges > 9);

    // Gets first score
    cout << "Enter score for judge 1: ";
    cin >> score;

    while (score < 0 || score > 100) {
        cout << "Incorrect value, must be between 1 and 100: ";
        cin >> score;
    }

    highScore = lowScore = total = score;
    cout << highScore;

    // Gets rest of scores and determines highest and lowest score
    for (int i = 2; i <= numJudges; i++)
    {
        cout << "Enter score for judge " << i << ":";
        cin >> score;

        while (score < 0 || score > 100) {
            cout << "Incorrect value, must be between 1 and 100: ";
            cin >> score;
        }

        total += score;
        if (score > highScore)
            highScore = score;
        else if (score < lowScore)
            lowScore = score;
    }

    // Gets and displays average
    total -= highScore + lowScore;
    total /= (numJudges - 2);
    cout << "Average is " << total << endl;

    return 0;
}
