#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
using namespace std;

//define animal class here 
class Animal {
private:
    string name;
    int age;
    bool isHungry;

public:
    
    Animal() {
        name = "unknown";
        age = 0;
        isHungry = false;
    }

    Animal(string name, int age, bool isHungry) {
        this->name = name;
        this->age = age;
        this->isHungry = isHungry;
    }

   
    ~Animal() {
        
    }

   virtual void display() {
        cout <<"name is:"<<name<<"age is"<<age<<"hungry?"<<isHungry<<endl
    }

    // Feed function
    void feed() {
        if (isHungry) {
            cout << name << " is hungry" << endl;
            isHungry = false;
        } else {
            cout << name << " is not hungry" << endl;
        }
    }
};
#endif



