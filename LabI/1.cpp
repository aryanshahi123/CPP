#include <iostream>
using namespace std;

int main()
{
    int val;
    float c, f;
    int change;
    cout << "Which system do you want to change to?" << endl
         << "1) Change Celsius to Fahrenheit." << endl
         << "2) Change Fahrenheit to Celsius." << endl
         << "Enter your selection:";

    cin >> change;
    switch (change)
    {
    case 1:
        cout << "\nEnter temperature in Celsius:";
        break;
    case 2:
        cout << "\nEnter temperature in Fahrenheit:";
        break;
    default:
        cout << "\nInvalid Selection.";
        return 0;
    }
    cin >> val;
    if (change == 1)
    {
        f = (9.0 / 5) * val + 32;
        cout << "The temperature in Fahrenheit is " << f << " deg";
    }
    else if (change == 2)
    {
        c = (5.0 / 9) * (val - 32);
        cout << "The temperature in Celsius is " << c << " deg";
    }
    cout << endl
         << "Aryan Shahi- 1405 Section A";
    return 0;
}