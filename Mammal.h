#ifndef MAMMAL_H
#define MAMMAL_H

#include "Animal.h"

class Mammal : Animal(){ 
    private: 
    string furColor; 
    
    public:
            Mammal() : Animal(){
                furColor="Blue";
            }
        Mammal(string furColor): Animal(string name, int age, bool isHungry){
            this->furColor=furcolor; 
        }
        ~Mammal {
        
        }
        void display(){
            cout<<"color is:"<<furcolor<<endl
        }
};






#endif
