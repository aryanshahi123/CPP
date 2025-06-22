#include <iostream>

using namespace std;

class Counter
{
protected:
    int count = 0;

public:
    Counter operator++()
    {
        this->count += 1;
        return *this;
    }

    void getCount()
    {
        cout << count;
    }
};

class Multiplier
{
protected:
    int multiplier = 1;
    int sum;

public:
    void multiply()
    {
        multiplier = multiplier * sum;
    }

    void getMultiply()
    {
        cout << endl
             << multiplier;
    }
};

class Combined : public Counter, public Multiplier
{
public:
    Combined operator--()
    {
        this->count -= 1;
        return *this;
    }

    void initiateMultiply()
    {
        this->sum = count;
        this->multiply();
    }
};

int main()
{
    Combined c1;
    ++c1;
    ++c1;
    ++c1;
    c1.initiateMultiply();
    c1.getCount();
    c1.initiateMultiply();
    c1.getMultiply();
}