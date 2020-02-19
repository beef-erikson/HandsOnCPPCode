#include <iostream>

using namespace std;

// Simply menu to add and list values entered into an array
int main() {
    const int SIZE{5};          // Last cell in array
    int list[SIZE + 1]{0};      // Array itself
    int value{};                // Value to add to array
    int option{};               // Menu option selected

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
                if (list[0] < SIZE)
                    list[++list[0]] = value;
                else
                    cout << "List is full\n\n\n";
                break;
            case 2:
                cout << "List contains " << list[0] << " entries\n\n\n";
                break;
            case 3:
                if (list[0] == 0)
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
