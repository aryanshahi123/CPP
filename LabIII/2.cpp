#include <iostream>
using namespace std;

class Time
{
public:
    int hours, minutes;
    Time(int h = 0, int m = 0) : hours(h), minutes(m) {}

    Time operator-(const Time &t)
    {
        int m1 = hours * 60 + minutes;
        int m2 = t.hours * 60 + t.minutes;
        int diff = m1 - m2;
        return Time(diff / 60, diff % 60);
    }

    void display()
    {
        cout << hours << " hrs " << minutes << " mins" << endl;
    }
};

int main()
{
    Time t1(4, 45), t2(2, 30);
    Time t3 = t1 - t2;
    t3.display();
    cout << "\nAryan Shahi- 1405 Section A";
    return 0;
}
