#include <iostream>
#include <iomanip>

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
        cout << "4 - Delete by position\n";
        cout << "5 - Delete by value\n";
        cout << "6 - QUIT\n";

        // Get menu option
        cout << "Enter option required (1 - 6): ";
        cin >> option;
        while (option < 1 || option > 6) {
            cout << "Invalid option. Re-enter (1 - 6): ";
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
                    cout << setfill('=') << setw(20) << "" << endl;
                    cout << "Values held are\n";
                    for (int v : list)
                        cout << v << " ";
                    cout << endl << setfill('=') << setw(20) << "" << endl;
                    cout << "\n\n";
                }
                break;

                // Deletes specified position in array
            case 4:
                cout << "Enter position of item to be deleted: ";
                cin >> post;
                while (post < 1 || post > list[0]) {
                    cout << "The position is invalid\n"
                         << "Re-enter position or return to main menu with 0: ";
                    cin >> post;
                    if (post == 0) {
                        cout << endl;
                        break;
                    }
                }

                // Deletes by moving existing entries to the left
                for (int current = post + 1; current <= list[0] + 1; current++) {
                    list[current - 1] = list[current];
                    list[current] = 0;
                }
                list[0]--;
                break;

                // Deletes specified value in array
            case 5:
                cout << "Enter value to be deleted: ";
                cin >> value;

                // Search for value
                post = 1;
                while (post <= list[0] && list[post] != value)
                    post++;

                // Value found, shift other values to the left to delete
                if (list[post] == value) {
                    for (int current = post + 1; current <= list[0] + 1; current++) {
                        list[current - 1] = list[current];
                        list[current] = 0;
                    }
                    list[0]--;
                }
                
                // Print entries
                if (list[0] == 0)
                    cout << "The list is empty \n\n";
                else {
                    cout << setfill('=') << setw(20) << "" << endl;
                    cout << "Values held are now\n";
                    for (int v : list)
                        cout << v << " ";
                    cout << endl << setfill('=') << setw(20) << "" << endl;
                    cout << "\n\n";
                }
                break;

                // Terminate program
            case 6:
                cout << "Program terminated.\n";
                break;

            default:
                cout << "You should never see this.\n";
                break;
        }
    } while (option != 6);

    return 0;
}
