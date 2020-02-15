#include <iostream>

using namespace std;

// Counts how many numbers are added until terminated with 0, then finds average
int main() {
    int no{99};
    int total{0};
    int count{};
    double average{};

    // Gets numbers from user
    for (count = 0; no != 0; count++) {
        cout << "Enter number: ";
        cin >> no;
        total += no;
    }

    count--;    // This is done to get rid of the extra number of count++

    // Display average
    if (count > 0) {
        average = static_cast<double>(total) / count;
        cout << "Average of the " << count << " numbers is " << average << endl;
    }

    return 0;
}
