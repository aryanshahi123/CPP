
#include <iostream>

using namespace std;

class Instrument // abstract class, has at least one pure virtual function
{
public:
    virtual void makeSound() = 0; // pure virtual function
};

class piano : public Instrument
{
public:
    void makeSound()
    {
        cout << "Piano Playing.";
    }
};

int main()
{
    Instrument *ptr = new piano;
    ptr->makeSound();
    return 0;
}