#ifndef BIRD_H
#define BIRD_H

#include "Animal.h"


class bird : Animal(){
    private:
    float wingSpan;
public:
bird() : Animal(){
  wingSpan=20.5;  
}
bird(string wingSpan) : Animal(string name, int age, bool isHungry){
    this->wingSpan=wingSpan;
}
~bird{
}
void display(){
    cout<<"wingspan is:"<<wingspan<<endl;
}
};






#endif
