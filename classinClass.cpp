/* Making Data and Methods both public */

#include <iostream>

using namespace std;

class Student
{                // start of the class definition
public:          // access specifier
    string name; // representing attributes of the object using variables
    int rollno;

public: // access specifier
    // representing behavior of the object using methods
    void setdata(string studentname, int studentroll)
    {
        name = studentname;
        rollno = studentroll;
    }

    void getdata()
    { // getter->to get the data members;
        cout << "The name of the student is:" << name << endl;
        cout << "The roll number of the student is:" << rollno;
    }
}; // end of class defintion

int main() // start of the main function
{
    Student s1, s2;    // creating objects of the class
    s1.name = "Aryan"; // accessing public data
    s1.rollno = 1405;  // accessing public data
    s1.getdata();      // calling the getter method to get the data members
    return 0;
}