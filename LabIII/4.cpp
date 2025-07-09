#include <iostream>
using namespace std;

class Counter
{
public:
    int count;
    Counter(int c = 0) : count(c) {}

    Counter &operator++()
    {
        ++count;
        return *this;
    }

    void display()
    {
        cout << "Count: " << count << endl;
    }
};

int main()
{
    Counter c1(10);
    ++c1;
    c1.display();
    cout << "\nAryan Shahi- 1405 Section A";
    return 0;
}
