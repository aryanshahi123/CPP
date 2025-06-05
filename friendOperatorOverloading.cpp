#include <iostream>
using namespace std;
class Complex
{
private:
    int real, imaginary;

public:
    Complex() {};
    Complex(int rl, int im)
    {
        real = rl;
        imaginary = im;
    };

    void getdata()
    {
        cout << real << " + " << imaginary << "i" << endl;
    }

    friend Complex operator+(Complex, Complex);
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
    Complex c1(10, 20), c2(20, 30), c3;
    int x;
    c3 = c1 + c2;
    c3.getdata();
    return 0;
}
