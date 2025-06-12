#include <iostream>
using namespace std;

class BankAccount
{
    string accountHolder;
    int accountNumber;
    float balance;

public:
    void input()
    {
        cout << "Enter account holder name, account number, and balance: ";
        cin >> accountHolder >> accountNumber >> balance;
    }
    void deposit(float amount)
    {
        balance += amount;
    }
    void withdraw(float amount)
    {
        if (balance >= amount)
            balance -= amount;
        else
            cout << "Insufficient balance!" << endl;
    }
    void display()
    {
        cout << "Name: " << accountHolder << endl
             << "Account No: " << accountNumber << endl
             << "Balance: " << balance << endl;
    }
};

int main()
{
    BankAccount acc;
    acc.input();

    float depositAmount, withdrawAmount;

    cout << "Enter amount to deposit: ";
    cin >> depositAmount;
    acc.deposit(depositAmount);

    cout << "Enter amount to withdraw: ";
    cin >> withdrawAmount;
    acc.withdraw(withdrawAmount);

    acc.display();
    cout << "Aryan Shahi- 1405 Section A";
    return 0;
}