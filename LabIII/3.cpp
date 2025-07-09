#include <iostream>
using namespace std;

class Point
{
public:
    int x, y;
    Point(int a = 0, int b = 0) : x(a), y(b) {}

    bool operator==(const Point &p)
    {
        return x == p.x && y == p.y;
    }
};

int main()
{
    Point p1(3, 5), p2(3, 5);
    if (p1 == p2)
        cout << "Points are equal\n";
    else
        cout << "Points are not equal\n";

    cout << "\nAryan Shahi- 1405 Section A";
    return 0;
}
