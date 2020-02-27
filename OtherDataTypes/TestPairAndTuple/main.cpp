#include <iostream>
#include <iomanip>

using namespace std;

// Example of a pair
int main() {
    pair <string, int> pp {"Nancy", 34};
    cout << "Name: " << pp.first << setw(10) << "Age: " << pp.second << endl;

    // Change values
    pp = make_pair("Dave", 19);
    cout << "Name: " << pp.first << setw(10) << "Age: " << pp.second << endl;

    // Newer approach
    pair pv = pair(23, 19.3);
    cout << "Int: " << pv.first << setw(10) << "Float: " << pp.second << endl;
    return 0;
}
