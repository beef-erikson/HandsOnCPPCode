#include <iostream>
#include <time.h>

using namespace std;

// Shows number of times each number appears in a die roll for 10,000 rolls
int main() {
    const int FACES = 20;    // Number of faces on dice to test against
    int counts[FACES + 1]{0};
    int dicethrow{};

    srand(static_cast<unsigned>(time(nullptr)));

    // Throws die and adds to counts array
    for (int i{1}; i <= 10000; i++) {
        dicethrow = rand() % FACES + 1;
        counts[dicethrow]++;
    }

    for (int c{1}; c < size(counts); c++)
        cout << c << " occured " << counts[c] << " times." << endl;
    return 0;
}
