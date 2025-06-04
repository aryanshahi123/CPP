#include <iostream>
using namespace std;

int main()
{
    int a, b, choice, val, great, least;
    char qw;
    do
    {
        cout << "\nEnter two numbers:";
        cin >> a >> b;
        cout << "Operations:" << endl
             << "1)Addition" << endl
             << "2)Subtraction" << endl
             << "3)Multiplication" << endl
             << "4)Division" << endl
             << "Choice:";
        cin >> choice;
        switch (choice)
        {
        case 1:
            val = a + b;
            break;
        case 2:
            val = a - b;
            break;
        case 3:
            val = a * b;
            break;
        case 4:
            val = a / b;
            break;
        default:
            cout << "Invalid Choice.";
            break;
        }
        if (choice < 5)
        {
            cout << "The result of operation is:" << val << endl;
        }

        great = (a > b) ? a : b;
        least = (a < b) ? a : b;
        cout << "The greater number is:" << great << endl;
        cout << "The smaller number is:" << least << endl;

        cout << "\nDo you want to continue?(Y/N):";
        cin >> qw;
    } while (qw == 'Y' || qw == 'y');
    cout << "\nAryan Shahi- 1405 Section A";
}