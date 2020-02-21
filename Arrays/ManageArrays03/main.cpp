#include <iostream>

using namespace std;

// Inserts value into array wherever the user wants it to be
int main() {
    const int SIZE{5};
    int list[SIZE + 1]{0};
    int value;
    int option;

    do {
        // Menu
        cout << "1 - Enter value\n";
        cout << "2 - Display number of values held\n";
        cout << "3 - Display all values held\n";
        cout << "4 - QUIT\n";

        // Get menu option
        cout << "Enter option required (1 - 4): ";
        cin >> option;
        while (option < 1 || option > 4) {
            cout << "Invalid option. Re-enter (1 - 4): ";
            cin >> option;
        }
        cout << "\n\n";

        // Execute option
        int post{0};
        switch (option) {
            // Add value at specified location
            case 1:
                if (list[0] < SIZE) {
                    cout << "Enter new value: ";
                    cin >> value;
                    cout << "Enter its position: ";
                    cin >> post;

                    // Check for correct value
                    while (post < 1 || post > list[0] + 1) {
                        cout << "Invalid position. Must be in range 1 to "
                             << list[0] + 1 << endl;
                        cout << "Re-enter position: ";
                        cin >> post;
                    }

                    // Frees space for new value
                    for (int current{list[0]}; current >= post; current--) {
                        int next{current + 1};
                        list[next] = list[current];
                    }
                    // Adds new value and increments count
                    list[post] = value;
                    list[0]++;
                }
                else
                    cout << "List is full\n\n\n";
                break;

                // Display number of entries
            case 2:
                cout << "The list contains " << list[0] << " entries.\n\n";
                break;

                // Display entries
            case 3:
                if (list[0] == 0)
                    cout << "The list is empty \n\n";
                else {
                    cout << "Values held are\n";
                    for (int v : list)
                        cout << v << " ";
                    cout << "\n\n";
                }
                break;

            // Terminate program
            case 4:
                cout << "Program terminated.\n";
                break;

            default:
                cout << "You should never see this.\n";
                break;
        }
    } while (option != 4);

    return 0;
}
