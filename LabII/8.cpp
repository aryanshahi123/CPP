// 8. Create a class Distance with feet and inches. Write a function to add two Distance objects and return the result as a new object. Use this function in main() to display the total distance.

#include <iostream>
using namespace std;

class Distance
{
private:
    int feet;
    int inches;

public:
    // Constructor
    Distance(int f = 0, int i = 0)
    {
        feet = f;
        inches = i;
    }

    // Function to add two Distance objects
    Distance add(Distance d)
    {
        int totalFeet = feet + d.feet;
        int totalInches = inches + d.inches;

        // Convert inches to feet if >= 12
        if (totalInches >= 12)
        {
            totalFeet += totalInches / 12;
            totalInches = totalInches % 12;
        }

        return Distance(totalFeet, totalInches);
    }

    // Function to display distance
    void display()
    {
        cout << feet << " feet " << inches << " inches" << endl;
    }
};

int main()
{
    Distance d1(5, 9);
    Distance d2(4, 11);

    Distance d3 = d1.add(d2);

    cout << "Total distance: ";
    d3.display();
    cout << "Aryan Shahi- 1405 Section A";
    return 0;
}
