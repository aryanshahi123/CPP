// 7. Create a class Student with name and roll. Use a static data member to count the total number of students created.
// Display the total number of students after creating multiple objects.

#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int roll;
    static int count;

public:
    Student(string n, int r)
    {
        name = n;
        roll = r;
        count++;
    }

    void display()
    {
        cout << "Name: " << name << ", Roll: " << roll << endl;
    }

    static void showCount()
    {
        cout << "Total number of students: " << count << endl;
    }
};

int Student::count = 0;

int main()
{
    Student s1("Ram", 1);
    Student s2("Shyam", 2);
    Student s3("Gita", 3);

    s1.display();
    s2.display();
    s3.display();

    Student::showCount();
    cout << "Aryan Shahi- 1405 Section A";
    return 0;
}
