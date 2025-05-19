#include <iostream>

using namespace std;
class Rectangle
{
private:
    int length, width;

public:
    void setlength(int l)
    {
        length = l;
    }

    void setwidth(int w)
    {
        width = w;
    }

    int getlength()
    {
        return length;
    }

    int getwidth()
    {
        return width;
    }

    void getarea()
    {
        cout << "The area is:" << getlength() * getwidth() << endl;
    }
};

int main()
{
    Rectangle r1;
    int l, w;
    cout << "Enter the length:";
    cin >> l;
    r1.setlength(l);
    cout << "Enter the width:";
    cin >> w;
    r1.setwidth(w);
    cout << "The length is:" << r1.getlength() << endl;
    cout << "The width is:" << r1.getwidth() << endl;
    r1.getarea();
}