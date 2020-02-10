#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    string greeting = " Hello #100DaysOfCode! ";
    cout << setfill('*') << setw(greeting.length() + 20) << greeting
        << setw(20) << "" << endl;
    return 0;
}
