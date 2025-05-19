#include <iostream>

using namespace std;
inline int sum(int a, int b)
{
    return a + b;
}

int main()
{
    cout << "Sum:" << sum(1, 2);
    return 0;
}