#include <iostream>
using namespace std;
class Complex
{
private:
    int r, i;

public:
    Complex() {};
    Complex(int r_, int i_)
    {
        r = r_;
        i = i_;
    }

    Complex add(Complex c1, Complex c2)
    {
        Complex temp;
        temp.r = c1.r + c2.r;
        temp.i = c1.i + c2.i;
        return temp;
    }

    void showData()
    {
        cout << r << "+" << i << "i";
    }
};

int main()
{
    Complex c1(2, 3), c2(4, 8), c3;
    c3 = c3.add(c1, c2);
    c3.showData();
}