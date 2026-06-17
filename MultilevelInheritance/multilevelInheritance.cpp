#include<iostream>
using namespace std;

class Vehicle {
public:
    Vehicle(){
        cout<<"vehicle"<<endl;
    }
};

class Bike : public Vehicle {
public:
    Bike() {
        cout<<"bike"<<endl;
    }
};

class Car: public Bike {
public:
    Car(){
        cout<<"car"<<endl;
    }
};

int main(){
    Car c;
    return 0;
}