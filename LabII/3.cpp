// 3. Create a class Time with data members hours and minutes. Write a function to add two Time objects.

#include <iostream>

using namespace std;

class Time
{
private:
    int hours;
    int minutes;

public:
    Time(int h = 0, int m = 0)
    {
        hours = h;
        minutes = m;
    }
    Time add(Time t)
    {
        Time result;
        result.minutes = minutes + t.minutes;
        result.hours = hours + t.hours;
        while (result.minutes >= 60)
        {
            result.minutes -= 60;
            result.hours += 1;
        }
        return result;
    }

    void getTime()
    {
        cout << hours << ":" << minutes << endl;
    }
};

int main()
{
    Time t1(5, 57), t2(6, 35), t3;
    t3 = t1.add(t2);
    t3.getTime();
    cout << "Aryan Shahi- 1405 Section A";
    return 0;
}