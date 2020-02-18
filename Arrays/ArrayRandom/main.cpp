#include <iostream>
#include <time.h>

using namespace std;

int main() {
    int list[20];

    srand(static_cast<int>(time(0)));
    for (int i = 0; i < size(list); i++)
        list[i] = rand() % 201;
    cout << "CONTENTS OF list\n";
    for (auto v : list)
        cout << v << " ";
    cout << endl;

    return 0;
}
