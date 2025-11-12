#ifndef VISITOR_H
#define VISITOR_H

#include <string>
using namespace std;

//define visitor class here
class visitor{
    private:
    string VisitorName;
    int ticketBought; 
public:
visitor(){
    VisitorName="ahmed";
    ticketBought="0";
}
visitor(string VisitorName, int ticketBought){
    this->VisitorName=VisitorName;
    this->ticketBought=ticketBought;
}
~visitor{}
void display(){
    cout<<"name"<<VisitorName<<"tickets bought:"<<ticketBought<<endl;
}
};






#endif
