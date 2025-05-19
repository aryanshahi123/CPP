#include <iostream>

using namespace std;

void voteCheck(int num);

int main()
{
    int age;
    cout << "Enter your age:";
    cin >> age;
    voteCheck(age);
    return 0;
}

void voteCheck(int num)
{
    if (num > 18)
    {
        cout << "Can Vote";
    }
    else
    {
        cout << "Cant Vote";
    }
}