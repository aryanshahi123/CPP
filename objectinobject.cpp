#include <iostream>

using namespace std;

class Height
{
private:
    int feet, inches;

public:
    Height()
    {
        feet = 0, inches = 0;
    }
    Height(int x, int y)
    {
        feet = x, inches = y;
    }
    void getHeight()
    {
        cout << "Your height is:" << feet << "'" << inches << "\"" << endl;
    }

    Height addHeight(Height h1, Height h2)
    {
        Height var;
        var.feet = h1.feet + h2.feet;
        var.inches = h1.inches + h2.inches;
        while (var.inches > 12)
        {
            var.inches -= 12;
            var.feet++;
        }
        return var;
    }
};

int main()
{
    Height h1(5, 11);
    Height h3, h4;
    Height h2(5, 8);
    h4 = h3.addHeight(h1, h2);
    h4.getHeight();
}