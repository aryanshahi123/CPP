#include <iostream>
using namespace std;

class student
{
private:
    string name = "null";
    int roll = 0;

public:
    void display()
    {
        cout << "Name:" << name << endl;
        cout << "Roll:" << roll << endl
             << endl;
    }

    void entry(string a, int b)
    {
        name = a;
        roll = b;
    }

    void changeRoll(int num)
    {
        roll = num;
    }
};

int main()
{
    student s1, s2;
    string a;
    int b;
    cout << "Enter your name:";
    getline(cin, a);
    cout << "Enter your roll:";
    cin >> b;
    s1.entry(a, b);
    s1.changeRoll(105);
    s1.display();
    s2.display();

    s2.entry("Gaurav", 200);
    s2.display();
}
