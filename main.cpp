#include "Animal.h"
#include "Bird.h"
#include "Mammal.h"
#include "Reptile.h"
#include "Enclosure.h"
#include "Visitor.h"
#include <iostream>
using namespace std;



Animal::Animal() : name(""), age(0), isHungry(false) {}

Animal::Animal(string n, int a, bool h) {
    name = n;
    age = a;
    isHungry = h;
}

Animal::~Animal() {}

void Animal::display() {
    cout << name << " (Age: " << age << ", ";
    cout << (isHungry ? "Hungry" : "Not Hungry") << ")";
}

void Animal::feed() {
    if (isHungry) {
        cout << "Feeding " << name << "..." << endl;
        isHungry = false;
    } else {
        cout << name << " is not hungry." << endl;
    }
}

Mammal::Mammal() : Animal(), furColor("") {}

Mammal::Mammal(string n, int a, bool h, string c) : Animal(n, a, h) {
    furColor = c;
}

Mammal::~Mammal() {}

void Mammal::display() {
    Animal::display();
    cout << endl;
}

Bird::Bird() : Animal(), wingSpan(0.0) {}

Bird::Bird(string n, int a, bool h, float s) : Animal(n, a, h) {
    wingSpan = s;
}

Bird::~Bird() {}

void Bird::display() {
    Animal::display();
    cout << endl;
}

Reptile::Reptile() : Animal(), isVenomous(false) {}

Reptile::Reptile(string n, int a, bool h, bool v) : Animal(n, a, h) {
    isVenomous = v;
}

Reptile::~Reptile() {}

void Reptile::display() {
    cout << name << " (Age: " << age << ", ";
    cout << (isVenomous ? "Venomous" : "Not Venomous") << ", ";
    cout << (isHungry ? "Hungry" : "Not Hungry") << ")" << endl;
}

Enclosure::Enclosure() {
    capacity = 5;
    currentCount = 0;
    animals = new Animal*[capacity];
}

Enclosure::Enclosure(int c) {
    capacity = c;
    currentCount = 0;
    animals = new Animal*[capacity];
}

Enclosure::~Enclosure() {
    for (int i = 0; i < currentCount; i++)
        delete animals[i];
    delete[] animals;
}

void Enclosure::addAnimal(Animal* a) {
    if (currentCount == capacity) {
        cout << "No more space for new animals." << endl;
        return;
    }
    animals[currentCount] = a;
    currentCount++;
}

void Enclosure::displayAnimals() {
    cout << "Enclosure 1 Animals:" << endl;
    for (int i = 0; i < currentCount; i++) {
        animals[i]->display();
    }
}

Visitor::Visitor() : visitorName(""), ticketsBought(0) {}

Visitor::Visitor(string name, int tickets) {
    visitorName = name;
    ticketsBought = tickets;
}

Visitor::~Visitor() {}

void Visitor::displayInfo() {
    cout << "Visitor Info:" << endl;
    cout << "Name: " << visitorName << endl;
    cout << "Tickets Bought: " << ticketsBought << endl;
}

int main() {
    animal animal1("lion",5,"hungry")
 Animal.animal1.display;
animal animal2 ("parrot",2,"not hungry")
Animal.animal2.display;
animal animal3("snake",3,"venomous","not hungry");
   Animal.animal3.display;
    Enclosure* enclosure1 = new Enclosure(3)
    visitor visitor1= ("sarah ali",3);
visitor.visitor1.display;


)
