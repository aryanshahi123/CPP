#include <iostream>

using namespace std;

int area(int);
double area(double, int);
long area(long, int, int);

int main()
{
    cout << area(10) << endl;
    cout << area(2.5, 8) << endl;
    cout << area(100, 75, 15) << endl;
}

int area(int r)
{
    return 3.14 * r * r;
}

double area(double l, int b)
{
    return l * b;
}

long area(long l, int b, int h)
{
    return 2 * (l * b + b * h + l * h);
}