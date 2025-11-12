#ifndef REPTILE_H
#define REPTILE_H

#include "Animal.h"

//define reptile class here

class Reptile : Animal(){
    private:
    bool isVenomous;
public:
Reptile() : Animal(){
    isVenomous=false; 
}
Reptile(bool isVenomous) : Animal(string name, int age, bool isHungry) {
    this->isVenomous=isVenomous;
}
~Reptile{}
void display(){
    cout<<"is it venomus:"<<isVenomous<<endl;
}

};








#endif
