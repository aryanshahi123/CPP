// 4. Define a base class Shape having data member radius(int).Derive new classes called
//     Circle and Sphere from this class.Write methods to compute the area of circle and sphere.

#include <iostream>
#define pi 3.14159

using namespace std;

// Base class
class Shape
{
protected:
    int radius;

public:
    Shape(int r)
    {
        radius = r;
    }
};

// Derived class for Circle
class Circle : public Shape
{
public:
    Circle(int r) : Shape(r) {}

    void area()
    {
        float result = pi * radius * radius;
        cout << "Area of Circle: " << result << endl;
    }
};

// Derived class for Sphere
class Sphere : public Shape
{
public:
    Sphere(int r) : Shape(r) {}

    void area()
    {
        float result = 4 * pi * radius * radius;
        cout << "Surface Area of Sphere: " << result << endl;
    }
};

int main()
{
    int r;
    cout << "Enter radius: ";
    cin >> r;

    Circle c(r);
    Sphere s(r);

    c.area();
    s.area();
    cout << "\nAryan Shahi- 1405 Section A";
    return 0;
}
