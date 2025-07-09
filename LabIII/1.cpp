// 1. Overload the + operator to add two Distance objects (with feet and inches).

#include <iostream>

using namespace std;

class Distance
{
private:
    int feet, inches;

public:
    Distance()
    {
        feet = 0;
        inches = 0;
    }

    Distance(int f, int i)
    {
        feet = f;
        inches = i;
    }

    Distance operator+(Distance d1)
    {
        Distance temp(feet + d1.feet, inches + d1.inches);
        if (temp.inches >= 12)
        {
            temp.feet += temp.inches / 12;
            temp.inches %= 12;
        }
        return temp;
    }

    void display()
    {
        cout << "Feet:" << feet << " Inches:" << inches << endl;
    }
};

int main()
{
    Distance d1(4, 5), d2(5, 10), d3;
    d3 = d1 + d2;
    d3.display();
    cout << "\nAryan Shahi- 1405 Section A";
    return 0;
}