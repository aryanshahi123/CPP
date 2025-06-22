#include <iostream>

using namespace std;

class Mammal
{
public:
    Mammal()
    {
        cout << "I can give birth." << endl;
    }
    void sleep()
    {
        cout << "I am mammal and sleep" << endl;
    }
};

class WingedAnimal
{
public:
    WingedAnimal()
    {
        cout << "I can fly." << endl;
    }

    void sleep()
    {
        cout << "I fly and sleep" << endl;
    }
};

class Bat : public Mammal, public WingedAnimal
{
public:
    Bat()
    {
        cout << "I am mammal and I am winged." << endl;
    }
};

int main()
{
    Bat b1;
    // b1.sleep(); error because both parent classes have same functions.
    b1.WingedAnimal::sleep();
    static_cast<Mammal>(b1).sleep();
    return 0;
}