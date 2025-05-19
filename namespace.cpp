#include <iostream>

using namespace std;
namespace namespace1
{
    int x = 20;
}

namespace namespace2
{
    int x = 20;
}

using namespace namespace1;

int main()
{
    cout << x << endl;

    return 0;
}
