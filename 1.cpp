#include <iostream>

using namespace std;
class Addition
{
private:
    static int n1, n2;

public:
    void add(int a, int b)
    {
        cout << "Sum is:" << a + b << endl;
    }
    int add(int a, int b, int c)
    {
        return a + b + c;
    }
    static void add();

    Addition()
    {

        cout << "Constructor called" << endl;
    }

    // ~Addition()
    // {
    //     cout << "Destructor Called" << endl;
    // }
};

int Addition::n1 = 5;
int Addition::n2 = 4;
void Addition::add()
{
    cout << n1 + n2 << endl;
}

int main()
{
    int i;
    int a[10];
    Addition arr[10];
    int val;
    for (i = 0; i < 10; i++)
    {
        if (i % 2 == 0)
        {
            arr[i].add(2 * i + 1, 3 * i - 2, 5 * i);
        }
        else
        {
            arr[i].add(2 * i + 1, i + 5);
        }
    }

    Addition::add();
    Addition b;
    val = b.add(3, 4, 5);
    cout << "Addition of 3 4 5 is: " << val;
}