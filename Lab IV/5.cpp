// 5. Write an example to illustrate on “Constructors in Derived Classes”.
#include <iostream>
using namespace std;

class Base
{
protected:
    int a;

public:
    Base(int x)
    {
        a = x;
        cout << "Base class constructor called. a = " << a << endl;
    }
};

class Derived : public Base
{
private:
    int b;

public:
    Derived(int x, int y) : Base(x)
    { // Calling base class constructor
        b = y;
        cout << "Derived class constructor called. b = " << b << endl;
    }
};

int main()
{
    Derived obj(10, 20);
    cout << "\nAryan Shahi- 1405 Section A";
    return 0;
}
