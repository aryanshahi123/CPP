#include <iostream>

using namespace std;

class Student
{
    int roll;
    string name;

public:
    Student()
    {
        cout << "I am default constructor" << endl;
    }

    Student(int rn, string nm)
    {
        roll = rn;
        name = nm;
    }

    Student(Student &s)
    { // roll Constructor
        roll = s.roll;
        name = s.name;
    }

    void display()
    {
        cout << "Name:" << name << '\t' << "roll no.:" << roll << endl;
    }
};

int main()
{
    Student s1;
    Student s2(100, "Aryan");
    Student s3(s2);
    Student s4 = s2;

    s1.display();
    s2.display();
    s3.display();
    s4.display();
}