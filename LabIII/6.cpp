#include <iostream>
using namespace std;

class Rectangle
{
public:
    int length, breadth;

    friend istream &operator>>(istream &in, Rectangle &r)
    {
        in >> r.length >> r.breadth;
        return in;
    }

    void display()
    {
        cout << "Area: " << length * breadth << endl;
    }
};

int main()
{
    Rectangle r;
    cout << "Enter length and breadth: ";
    cin >> r;
    r.display();
    cout << "\nAryan Shahi- 1405 Section A";
    return 0;
}
