// 2. Create a class Employee with data members name, id, and salary. Write functions to input and display details for multiple employees using an array of objects.

#include <iostream>

using namespace std;

class Employee
{
private:
    string name;
    int id;
    float salary;

public:
    void setData(string nm, int i, float sal)
    {
        name = nm;
        id = i;
        salary = sal;
    }

    void getData()
    {
        cout << "Id:" << id << endl
             << "Name:" << name << endl
             << "Salary:" << salary << endl
             << endl;
    }
};

int main()
{
    Employee e[3];
    int i, id;
    float sal;
    string name;
    for (i = 0; i < 3; i++)
    {
        cout << "Enter details for Employee " << i + 1 << ":" << endl;
        cout << "Enter Name:";
        cin >> name;
        cout << "Enter Id:";
        cin >> id;
        cout << "Enter Salary:";
        cin >> sal;
        e[i].setData(name, id, sal);
        cout << "\n";
    }
    cout << "Employee data:\n";
    for (i = 0; i < 3; i++)
    {
        e[i].getData();
    }
    cout << "Aryan Shahi- 1405 Section A";
    return 0;
}