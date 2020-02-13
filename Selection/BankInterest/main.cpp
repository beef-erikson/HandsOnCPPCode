#include <iostream>
using namespace std;

// Reads in balance of account and displays interest charged/paid per month
int main() {
    double balance{};

    cout << "Enter bank balance: ";
    cin >> balance;

    if (balance < 0)
        printf("Balance is %.2f, interest on account is %.2f per month.",
                balance, balance * 0.5);
    else if (balance < 2000)
        printf("Balance is %.2f, interest on account is %.2f per month",
                balance, balance * 0.1);
    else if (balance >= 2000)
        printf("Balance is %.2f, interest on account is %.2f per month",
                balance, balance * 0.2);
    return 0;
}
