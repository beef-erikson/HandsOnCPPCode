#include <iostream>
#include <iomanip>

using namespace std;

// Time struct
struct TimeType {
    int minutes{};
    int seconds{};
};

// Top score struct - uses TimeType
struct TopScoreType {
    char name[30]{};
    TimeType time{};
};

// Records fastest time achieved by player in a game with minutes and seconds
int main() {
    TopScoreType topScores[5]{
            {"Davy Jones",
                    3,
                    49}
    };

    cout << topScores[0].name << setw(10) <<
         topScores[0].time.minutes << ":" << topScores[0].time.seconds;

    return 0;
}
