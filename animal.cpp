#include <iostream>

using namespace std;

class Mammal
{
public:
    Mammal()
    {
        cout << "I can give birth." << endl;
    }
};

class WingedAnimal
{
public:
    WingedAnimal()
    {
        cout << "I can fly." << endl;
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
    return 0;
}