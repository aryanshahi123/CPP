//     8. Write a C++ program to reverse a given number.

#include <iostream>
using namespace std;
int main()
{
    int num, rev = 0, rem;
    cout << "Enter a number:";
    cin >> num;
    while (num != 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num /= 10;
    }
    cout << "The reverse of the number is:" << rev;
    cout << "\nAryan Shahi- 1405 Section A";
    return 0;
}