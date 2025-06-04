#include <iostream>

using namespace std;

class Student
{
public:
    int rollno;
    static string cname;
    void printname()
    {
        cout << rollno << cname; // Non static method can access both static and non static fields
    }
};

string Student::cname = "ABCD";

int main()
{
    Student s1, s2;
    s1.rollno = 10;
    s2.rollno = 20;
    cout << s1.cname << '\t' << s1.rollno << endl
         << s2.cname << '\t' << s2.rollno << endl;
    s1.cname = "XYZ";
    cout << s1.cname << '\t' << s1.rollno << endl
         << s2.cname << '\t' << s2.rollno << endl;
}