#include <iostream>
using namespace std;
class Complex
{
private:
    int real, imaginary;

public:
    Complex()
    {
        cout << "Default Called" << endl;
    };
    Complex(int rl, int im)
    {
        real = rl;
        imaginary = im;
    }
    Complex(int r)
    {
        real = r, imaginary = 0;
        cout << "Another Called";
    }

    void getdata()
    {
        cout << real << " + " << imaginary << "i" << endl;
    }

    friend Complex operator+(Complex, Complex);

    operator int()
    {
        return real;
    }
};

Complex operator+(Complex c1, Complex c2)
{
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.imaginary = c2.imaginary + c1.imaginary;
    return temp;
}

int main()
{
    Complex c1(10, 20), c2(20, 30), c3, c4;
    int x;
    c3 = c1 + c2;
    c4 = 5;
    c4.getdata();
    x = c3;
    cout << x;
    return 0;
}
