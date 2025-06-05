#include <iostream>
using namespace std;

class Student
{
private:
    int roll;
    string name;

public:
    void set(int r, string a)
    {
        roll = r;
        name = a;
    }

    friend void printdetails(Student);
};

void printdetails(Student s)
{
    cout << "Roll:" << s.roll << endl;
    cout << "Name:" << s.name;
}

int main()
{
    Student s1;
    s1.set(1405, "Aryan");
    printdetails(s1);
}
