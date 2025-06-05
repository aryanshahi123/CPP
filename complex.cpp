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

    Complex add(Complex c2)
    {
        Complex temp;
        temp.r = this->r + c2.r;
        temp.i = this->i + c2.i;
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
    c3 = c1.add(c2); // c1 is implicitly passed and c2 is explicitly passed.
    c3.showData();
}