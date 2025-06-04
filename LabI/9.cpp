//     9. Write a C++ program to check whether a given year is leap year or
//     not.

#include <iostream>

using namespace std;

int main()
{
    int year, flag = 0;
    cout << "Enter a year:";
    cin >> year;
    if (year % 100 == 0)
    {
        if (year % 400 == 0)
        {
            flag = 1;
        }
    }
    else
    {
        if (year % 4 == 0)
        {
            flag = 1;
        }
    }

    if (flag == 1)
    {
        cout << year << " is a leap year.";
    }
    else
    {
        cout << year << " is not a leap year.";
    }
    cout << "\nAryan Shahi- 1405 Section A";
    return 0;
}