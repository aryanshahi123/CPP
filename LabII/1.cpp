// 1. Create a class Student with data members name, roll, and marks. Write member functions to input and display the data of a student.

#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int roll;
    int marks;

public:
    void setData(string nm, int rl)
    {
        name = nm;
        roll = rl;
    }

    void getData()
    {
        cout << "Name:" << name << endl
             << "Roll:" << roll << endl;
    }
};

int main()
{
    Student s1;
    s1.setData("Aryan", 1405);
    s1.getData();
    cout << "Aryan Shahi- 1405 Section A";
    return 0;
}