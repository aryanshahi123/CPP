#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, b, c;
    float d = 45.6, f = 78.9;
    cout << "Enter values of a & b:";
    cin >> a >> b;
    c = pow(a, b);
    cout << b << "Power of" << a << ":" << c << endl;
    cout << "Square root of a:" << sqrt(a) << endl;
    cout << "Ceil value of " << d << ":" << ceil(d) << endl;
    cout << "Floor value of" << f << ":" << floor(f) << endl;

    return 0;
}