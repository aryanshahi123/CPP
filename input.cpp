#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int x, y;
    float f = 3.1415;
    cout << setprecision(2) << f << endl;
    cout << "Enter first number:";
    cin >> x;
    cout << "Enter second number";
    cin >> y;
    cout << left;
    cout << setw(12) << "Hello" << endl
         << right << setw(50) << "The sum is:" << x + y;
    return 0;
}