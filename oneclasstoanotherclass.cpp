#include <iostream>
using namespace std;

class Product
{
private:
    int x, y;

public:
    Product() {}
    Product(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
    void getdata()
    {
        cout << "Product Data:" << x << y << endl;
    }

    int getx()
    {
        return x;
    }

    int gety()
    {
        return y;
    }
};

class Item
{
private:
    int a, b;

public:
    Item() {}
    Item(int x, int y)
    {
        this->a = x;
        this->b = y;
    }

    Item(Product p1)
    {
        a = p1.getx();
        b = p1.gety();
    }
    void getdata()
    {
        cout << "Item Data:" << a << b << endl;
    }
};

int main()
{
    Product p1(2, 3);
    Item i1;
    i1 = p1;
    i1.getdata();
}