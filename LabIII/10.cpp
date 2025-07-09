#include <iostream>
using namespace std;

class Money
{
public:
    int rupees, paisa;
    Money(int r = 0, int p = 0) : rupees(r), paisa(p) {}

    Money &operator+=(const Money &m)
    {
        paisa += m.paisa;
        rupees += m.rupees + paisa / 100;
        paisa %= 100;
        return *this;
    }

    void display()
    {
        cout << rupees << " rupees and " << paisa << " paisa" << endl;
    }
};

int main()
{
    Money m1(10, 90), m2(5, 30);
    m1 += m2;
    m1.display();
    cout << "\nAryan Shahi- 1405 Section A";
    return 0;
}
