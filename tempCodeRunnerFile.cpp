int main(){
    Instrument *ptr[] = {new Piano, new Guitar};
    for(int i=0;i<2;i++){
ptr[i]->makeSound();
    }
    
    return 0;
}