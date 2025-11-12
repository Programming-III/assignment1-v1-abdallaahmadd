#ifndef ENCLOSURE_H
#define ENCLOSURE_H

#include "Animal.h"

class Enclosure{
    private:
    Animal* Animal; 
    int capacity;
    int currentCount;
public:
Enclosure(){
    capacity=30;
    currentCount=0'
}
Enclosure(Animal* Animal, int Capacity, int currentCount){
    this->Animal=Animal;
    this->Capacity=Capacity;
    this->currentCount=currentCount;
}
~Enclosure{
    delete [];
}
void addAnimal(Animal* a){
    If(capacity<currentCount){
    currentCount++;
    }
}
void display (){
    cout<<"capacity is"<<capacity<<"count is"<<currentCount<<endl;
}
};







#endif
