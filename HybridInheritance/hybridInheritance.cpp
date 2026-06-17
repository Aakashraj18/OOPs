#include<iostream>
using namespace std;

class Vehicle {
public:
    Vehicle(){
        cout<<"vehicle"<<endl;
    }
};

class Fare {
public:
    Fare(){
        cout<<"Fare"<<endl;
    }
};

class Car: public Vehicle {
public:
    Car(){
        cout<<"car"<<endl;
    }
};

class Bus: public Vehicle, public Fare {
public:
    Bus(){
        cout<<"bus"<<endl;
    }
};

int main(){
    Bus b;
    return 0;
}