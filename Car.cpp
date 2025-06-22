#include <iostream>
using namespace std;

class Car
{
private:
    int speed;
    bool isrunning;

public:
    Car()
    {
        isrunning = true;
        speed = 0;
        cout << "The engine is on.\n";
    }
    void accelerate()
    {
        speed += 5;
    }

    void accelerate(int a)
    {
        speed += a;
    }
    bool runStatus()
    {
        return isrunning;
    }

    void brake()
    {
        speed -= 5;
        if (speed < 0)
        {
            speed = 0;
        }
    }

    void showSpeed()
    {
        cout << "Speed:" << speed << "km/h" << endl;
        if (speed <= 0)
        {
            isrunning = false;
        }
    }

    int getSpeed()
    {
        return speed;
    }

    ~Car()
    {
        cout << "The engine stopped\n";
    }
};

int main()
{
    bool isrunning = true;
    Car c1;
    int choice;
    do
    {
        cout << "Do you want to accelerate(1) or brake(2)?:";
        cin >> choice;
        if (choice == 1)
        {
            if (c1.getSpeed() % 2 == 0)
            {
                c1.accelerate(7);
            }
            else
            {
                c1.accelerate();
            }

            c1.showSpeed();
        }
        else if (choice == 2)
        {
            c1.brake();
            c1.showSpeed();
        }
        else
        {
            cout << "Invalid Choice" << endl;
        }
    } while (c1.runStatus());
    return 0;
}