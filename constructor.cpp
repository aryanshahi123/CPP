#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length, width;

public:
    Rectangle()
    { // Constructor
        length = width = 10;
    }

    void getData()
    {
        cout << length << " " << width << endl;
    }

    Rectangle(int x);
};

Rectangle::Rectangle(int x) // :: is called scope-resolution operator
{
    length = width = x;
}

int main()
{
    Rectangle r1(100), r2;
    r1.getData();
    r2.getData();
    return 0;
}