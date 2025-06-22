#include <iostream>

using namespace std;

class Employee
{
protected:
    string name;
    float salary;

public:
    Employee()
    {
        cout << "You are an employee";
    }
    Employee(string nm, float sal)
    {
        this->name = nm;
        this->salary = sal;
    }

    void getData()
    {
        cout << "Name:" << name << endl
             << "Salary:" << salary << endl;
    }
};

class Developer : public Employee
{
protected:
    string skill;

public:
    Developer()
    {
        cout << "You are also a developer";
    }

    Developer(string nm, float sal, string skill) : Employee(nm, sal), skill{skill} //*
    {
        //*this->skill = skill
    }
    void getData()
    {
        Employee::getData();
        cout << "Skill:" << skill;
    }
};

int main()
{
    Developer d1("Aryan", 500000.5, "Full-stack");
    d1.getData();
    return 0;
}
