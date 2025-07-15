#include <iostream>
using namespace std;
class Instrument{
    public:
    virtual void makeSound(){
    cout<<"Instrument Playing";
    }
};

class Piano: public Instrument{
    public:
    void makeSound(){
        cout<<"Piano Playing";
    }
};

class Guitar: public Instrument{
    public:
    void makeSound(){
        cout<<"Guitar Playing";
    }
};

int main(){
    Instrument *ptr[] = {new Piano, new Guitar};
    for(int i=0;i<2;i++){
ptr[i]->makeSound();
    }
    
    return 0;
}

// int main(){
//     Piano p1;
//     Guitar g1;
//     Instrument ins[]={p1,g1};
//     for(int i=0;i<2;i++){
//         ins[i].makeSound();
//     }
//     return 0;
// }