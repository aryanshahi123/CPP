// C++ Program to Demonstrate
// Operator Overloading
#include <iostream>
using namespace std;

class Complex
{
private:
    int real, imag;

public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }

    // This is automatically called when '+' is used with
    // between two Complex objects
    Complex operator+(Complex obj)
    {
        Complex res;
        res.real = this->real + obj.real;
        res.imag = this->imag + obj.imag;
        return res;
    }

    Complex operator-(Complex obj)
    {
        Complex temp;
        temp.real = real - obj.real;
        temp.imag = imag - obj.imag;
        return temp;
    }

    Complex operator++() // prefix
    {
        real += 1;
        imag += 1;
        return *this;
    }

    Complex operator++(int) // postfix
    {
        real += 1;
        imag += 1;
        return *this;
    }
    Complex operator--()
    {
        real -= 1;
        imag -= 1;
        return *this;
    }

    Complex operator-()
    {
        Complex temp;
        temp.real = -real;
        temp.imag = -imag;
        return temp;
    }

    bool operator>(Complex obj)
    {
        return (real * real + imag * imag) > (obj.real * obj.real + obj.imag * obj.imag) ? true : false;
    }

    bool operator==(Complex obj)
    {
        return (real * real + imag * imag) == (obj.real * obj.real + obj.imag * obj.imag) ? true : false;
    }

    bool operator<(Complex obj)
    {
        return (real * real + imag * imag) < (obj.real * obj.real + obj.imag * obj.imag) ? true : false;
    }

    void print() { imag > 0 ? cout << real << " + " << imag << "i \n" : cout << real << " - " << -imag << "i \n"; }
};

int main()
{
    Complex c1(10, 5), c2(2, 6), c3, c4, c5(1, 5);
    c3 = c1 + c2; // c1 is calling object in this case, c2 is explicitly passed
    c4 = c1 - c2; // c1 is calling object in this case, c2 is explicitly passed
    c3.print();
    c4.print();
    (-c1).print();
    ++c1;
    --c2;
    c2 > c1 ? cout << "Greater\n" : cout << "Smaller\n";
    c2 == c5 ? cout << "Yes\n" : cout << "Not\n";

    c1.print();
    c2.print();
}