#include <iostream>

using namespace std;

class Student
{
private:
    int roll;
    string name;

public:
    Student(int rn, string nm)
    {
        roll = rn;
        name = nm;
        cout << "Parameterised constructor:" << roll << '\t' << name << endl;
    }
};
int main()
{
    Student s1(100, "Aryan");
    Student s2 = Student(300, "Hardik");
}