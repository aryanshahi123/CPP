#include <iostream>
using namespace std;

int main()
{
    float balance, amount;
    int choice;
    cout << "Enter the balance in your account:";
    cin >> balance;
    cout << "Which action do you want to perform?" << endl
         << "1) Withdraw." << endl
         << "2) Deposit." << endl
         << "Choice:";
    cin >> choice;
    cout << "Enter the amount:";
    cin >> amount;
    switch (choice)
    {
    case 1:
        if (amount > balance)
        {
            cout << "Insufficient balance to withdraw.";
        }
        else
        {
            balance -= amount;
        }
        break;
    case 2:
        balance += amount;
        break;
    default:
        cout << "Invalid Choice.";
    }
    cout << "\nRemaining balance:" << balance;
    cout << "\nAryan Shahi- 1405 Section A";
}