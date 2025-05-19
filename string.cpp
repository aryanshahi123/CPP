#include <iostream>

using namespace std;

int main()
{
    char str[100];
    string samyam;
    getline(cin, samyam);
    cout << samyam << endl;
    cout << "Enter something: ";
    cin.get(str, 100, '.'); // getline also usable
    cout << "You entered: " << str << endl;
    return 0;
}