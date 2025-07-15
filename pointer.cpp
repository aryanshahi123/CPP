#include <iostream>

using namespace std;

class Student{
    string name;
    public:
    void setData(){
        cout<<"Enter name:";
        cin>>name;
    }

    void getData(){
        cout<<name;
    }
};

int main(){
    Student *st = new Student;
    st->setData();
    st->getData();
    delete st;
    return 0;
}