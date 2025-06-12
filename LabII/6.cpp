#include <iostream>
using namespace std;

class Box
{
private:
    float length, breadth, height;

public:
    // Default constructor (5x5x5)
    Box()
    {
        length = breadth = height = 5;
    }

    // Constructor for cube
    Box(float l)
    {
        length = breadth = height = l;
    }

    // Constructor for cuboid
    Box(float l, float b, float h)
    {
        length = l;
        breadth = b;
        height = h;
    }

    // Function to calculate volume
    float volume()
    {
        return length * breadth * height;
    }
};

int main()
{
    Box defaultBox;
    Box cube(4);
    Box cuboid(3, 4, 5);

    cout << "Volume of default box: " << defaultBox.volume() << endl;
    cout << "Volume of cube: " << cube.volume() << endl;
    cout << "Volume of cuboid: " << cuboid.volume() << endl;
    cout << "Aryan Shahi- 1405 Section A";
    return 0;
}
