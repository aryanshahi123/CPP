#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    Student(string n = "", int r = 0) : name(n), roll(r) {}

    friend ostream &operator<<(ostream &out, const Student &s)
    {
        out << "Name: " << s.name << ", Roll: " << s.roll;
        return out;
    }
};

int main()
{
    Student s("Aryan", 101);
    cout << s << endl;
    cout << "\nAryan Shahi- 1405 Section A";
    return 0;
}
