#include <iostream>

using namespace std;

int main() {
    const int SIZE{5};          // Last cell in array
    int list[SIZE + 1]{0};      // Array itself
    int value{};                // Value to add to array
    int option{};               // Menu option selected
    int post{0};                // Used to cycle through until it hits sentinel
    list[0] = -99;              // Sentinel value
    int count{0};               // Tracks position of sentinel for counting entries

    do {
        // Menu display
        cout << "1 - Enter value\n";
        cout << "2 - Display number of values held\n";
        cout << "3 - Display all values held\n";
        cout << "4 - QUIT\n";

        // Get user option
        cout << "Enter option required (1 - 4): ";
        cin >> option;
        while (option < 1 || option > 4) {
            cout << "Invalid option, re-enter (1 - 4): ";
            cin >> option;
        }
        cout << "\n\n";

        // Execute option
        switch (option) {
            case 1:
                cout << "Enter value to be added: ";
                cin >> value;
                // Increases array number until value of -99 is found
                while (list[post] != -99)
                    post++;
                // If array is not full, adds value to sentinel slot and moves sentinel
                if (list[SIZE] != -99)
                {
                    list[post] = value;
                    list[++post] = -99;
                }
                else
                    cout << "List is full\n\n\n";
                break;
            case 2:
                for (int i{0}; i < )
                {
                    if (v == -99) {
                        cout << list[v-1] << endl;
                    }
                    cout << v << endl;
                }
                cout << "List contains " << count << " entries\n\n\n";
                break;
            case 3:
                if (list[0] == 99)
                    cout << "The list is empty\n\n";
                else {
                    cout << "Values held are\n";
                    for (int i{1}; i <= list[0]; i++)
                        cout << list[i] << " ";
                    cout << "\n\n\n";
                }
                break;
            case 4:
                cout << "Program terminated\n";
                break;
            default:
                cout << "This should never be hit.";
        }
    } while (option != 4);

    return 0;
}
