#include <iostream>

using namespace std;

class Student
{
    int rollno;
    string name;

public:
    Student() {}
    Student(int r1, string nm)
    {
        rollno = r1;
        name = nm;
    }
    void getdata();
};

void Student::getdata()
{
    cout << rollno << "\t" << name;
}

int main()
{
    Student s1(100, "Aryan");
    s1.getdata();
    return 0;
}
