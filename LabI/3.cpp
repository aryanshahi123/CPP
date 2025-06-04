#include <iostream>
using namespace std;

int main()
{
    int a, b, great;
    cout << "Enter two numbers:";
    cin >> a >> b;
    great = (a > b) ? a : b;
    cout << "The greater number is:" << great << endl;
    if (a % 2 == 0 && b % 2 == 0)
    {
        cout << "Even:" << a << "," << b << endl;
    }
    else if (a % 2 == 0)
    {
        cout << "Even:" << a << endl;
        cout << "Odd:" << b << endl;
    }
    else if (b % 2 == 0)
    {
        cout << "Even:" << b << endl;
        cout << "Odd:" << a << endl;
    }
    else
    {
        cout << "Odd:" << a << "," << b << endl;
    }
    cout << "\nAryan Shahi- 1405 Section A";
}