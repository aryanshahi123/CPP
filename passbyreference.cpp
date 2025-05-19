#include <iostream>
#include <iomanip>

using namespace std;
void swap(int &, int &);

int main()
{
    int x = 5, y = 10;
    swap(x, y);
    cout << "calling function" << endl;
    cout << right << setw(20) << "x=" << x << endl
         << setw(20) << "y=" << y;
    return 0;
}

void swap(int &x, int &y)
{
    x = x + y;
    y = x - y;
    x = x - y;
    cout << right << setw(20) << "x=" << x << endl
         << setw(20) << "y=" << y << endl;
}
