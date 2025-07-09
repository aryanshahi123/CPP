#include <iostream>
using namespace std;

class Book
{
public:
    string title, author;
    Book(string t = "", string a = "") : title(t), author(a) {}

    bool operator!=(const Book &b)
    {
        return title != b.title || author != b.author;
    }
};

int main()
{
    Book b1("1984", "Orwell"), b2("Animal Farm", "Orwell");
    if (b1 != b2)
        cout << "Books are different\n";
    else
        cout << "Books are the same\n";

    cout << "\nAryan Shahi- 1405 Section A";
    return 0;
}
