#include <iostream>
using namespace std;

class Fraction
{
public:
    int num, den;
    Fraction(int n = 1, int d = 1) : num(n), den(d) {}

    Fraction operator/(const Fraction &f)
    {
        return Fraction(num * f.den, den * f.num);
    }

    void display()
    {
        cout << num << "/" << den << endl;
    }
};

int main()
{
    Fraction f1(3, 4), f2(2, 5);
    Fraction f3 = f1 / f2;
    f3.display();
    cout << "\nAryan Shahi- 1405 Section A";
    return 0;
}
