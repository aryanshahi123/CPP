// 5. Create a class Person with data members name and age. Write a function to input and display the details and check if the person is eligible to vote (age ≥ 18).
#include <iostream>

using namespace std;

class Person
{
private:
    string name;
    int age;

public:
    void input(string nm, int a)
    {
        name = nm;
        age = a;
    }
    void display()
    {
        cout << "Name:" << name << endl
             << "Age:" << age << endl;
    }

    void isEligible()
    {
        if (age >= 18)
        {
            cout << "Eligible to vote." << endl;
        }
        else
        {
            cout << "Not eligible to vote." << endl;
        }
    }
};

int main()
{
    Person p;
    string name;
    int age;

    cout << "Enter name and age: ";
    cin >> name >> age;

    p.input(name, age);
    p.display();
    p.isEligible();
    cout << "Aryan Shahi- 1405 Section A";
    return 0;
}