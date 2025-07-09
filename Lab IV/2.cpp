// 2. Imagine a college hires some lecturers.Some lecturers are paid in period basis, while others are paid in month basis.Create a class called lecturer that stores the ID, and the name of lecturers.From this class derive two classes : PartTime, which adds payperhr(type float);
// and FullTime, which adds paypermonth(type float).Each of these three classes should have a readdata() function to get its data from the user, and a printdata() function to display its data.Write a main() program to test the FullTime and PartTime classes by creating instances of them,
//     asking the user to fill in their data with readdata(), and then displaying the data with printdata().
#include <iostream>
using namespace std;

// Base class
class Lecturer
{
protected:
    int id;
    string name;

public:
    void readdata()
    {
        cout << "Enter ID: ";
        cin >> id;
        cin.ignore(); // clear newline
        cout << "Enter Name: ";
        getline(cin, name);
    }

    void printdata()
    {
        cout << "ID: " << id << "\nName: " << name << endl;
    }
};

// Derived class for PartTime
class PartTime : public Lecturer
{
private:
    float payperhr;

public:
    void readdata()
    {
        Lecturer::readdata(); // call base class function
        cout << "Enter Pay Per Hour: ";
        cin >> payperhr;
    }

    void printdata()
    {
        Lecturer::printdata(); // call base class function
        cout << "Pay Per Hour: " << payperhr << endl;
    }
};

// Derived class for FullTime
class FullTime : public Lecturer
{
private:
    float paypermonth;

public:
    void readdata()
    {
        Lecturer::readdata(); // call base class function
        cout << "Enter Pay Per Month: ";
        cin >> paypermonth;
    }

    void printdata()
    {
        Lecturer::printdata(); // call base class function
        cout << "Pay Per Month: " << paypermonth << endl;
    }
};

int main()
{
    PartTime pt;
    FullTime ft;

    cout << "Enter details for Part-Time Lecturer:\n";
    pt.readdata();
    cout << "\nEnter details for Full-Time Lecturer:\n";
    ft.readdata();

    cout << "\n--- Part-Time Lecturer Details ---\n";
    pt.printdata();

    cout << "\n--- Full-Time Lecturer Details ---\n";
    ft.printdata();
    cout << "\nAryan Shahi- 1405 Section A";

    return 0;
}