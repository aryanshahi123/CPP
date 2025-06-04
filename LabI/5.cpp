#include <iostream>
using namespace std;

float area(float l);
float area(float l, float b);

int main()
{
    float l, b, ar;
    cout << "Enter the length of square:";
    cin >> l;
    cout << "The area of square is: " << area(l) << endl;
    cout << "Enter the length of rectangle:";
    cin >> l;
    cout << "Enter the breadth of rectangle:";
    cin >> b;
    cout << "The area of rectangle is: " << area(l, b);
    cout << "\nAryan Shahi- 1405 Section A";
}

float area(float l)
{
    return l * l;
}
float area(float l, float b)
{
    return l * b;
}