//        10. Write a C++ program to find the factorial of a given number

#include <iostream>

using namespace std;

int main()
{
    int n, fact = 1;
    cout << "Enter the number:";
    cin >> n;

    if (n < 0)
    {
        cout << "Invalid Entry.";
    }
    else
    {
        while (n > 1)
        {
            fact = fact * n;
            n -= 1;
        }
        cout << "The factorial of the number is:" << fact;
    }
    cout << "\nAryan Shahi- 1405 Section A";
    return 0;
}