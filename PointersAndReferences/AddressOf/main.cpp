#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int num {21};
    cout << "Address of num: " << setw(10) << &num << endl;

    return 0;
}
