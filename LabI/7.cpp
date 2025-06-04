// 7.Write a C++ program to demonstrate parameter passing mechanism using pass by address
//         method.

#include <iostream>
using namespace std;

void increase(int *, int *);

int main()
{
    int x = 1, y = 2;
    cout << "Before calling function, X=" << x << ", Y=" << y << endl;
    increase(&x, &y);
    cout << "After calling function, X=" << x << ", Y=" << y << endl;
    cout << "\nAryan Shahi- 1405 Section A";
}

void increase(int *x, int *y)
{
    (*x)++;
    (*y)++;
    cout << "In function, X=" << *x << ", Y=" << *y << endl;
}