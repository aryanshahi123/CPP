// 3. An industry seals lorry and taxi.Create a class Automobile that stores production date
//     and price.From this class derive another two classes : Lorry,
//     which adds weight capacity
//         in kilogram and Taxi,
//     which adds seat - capacity in number.Each of these classes should have member functions to get data and set data.Use user - defined constructors to initialize these objects.
#include <iostream>
using namespace std;

// Base class
class Automobile
{
protected:
    string productionDate;
    float price;

public:
    Automobile(string date, float p)
    {
        productionDate = date;
        price = p;
    }

    void displayData()
    {
        cout << "Production Date: " << productionDate << endl;
        cout << "Price: $" << price << endl;
    }
};

// Derived class for Lorry
class Lorry : public Automobile
{
private:
    float weightCapacity; // in kg

public:
    Lorry(string date, float p, float weight) : Automobile(date, p)
    {
        weightCapacity = weight;
    }

    void displayData()
    {
        Automobile::displayData();
        cout << "Weight Capacity: " << weightCapacity << " kg" << endl;
    }
};

// Derived class for Taxi
class Taxi : public Automobile
{
private:
    int seatCapacity;

public:
    Taxi(string date, float p, int seats) : Automobile(date, p)
    {
        seatCapacity = seats;
    }

    void displayData()
    {
        Automobile::displayData();
        cout << "Seat Capacity: " << seatCapacity << " seats" << endl;
    }
};

// Main function
int main()
{
    // Create Lorry and Taxi objects using constructors
    Lorry l("2024-06-01", 25000.0, 5000.0);
    Taxi t("2025-01-15", 15000.0, 4);

    cout << "--- Lorry Details ---" << endl;
    l.displayData();

    cout << "\n--- Taxi Details ---" << endl;
    t.displayData();
    cout << "\nAryan Shahi- 1405 Section A";

    return 0;
}
