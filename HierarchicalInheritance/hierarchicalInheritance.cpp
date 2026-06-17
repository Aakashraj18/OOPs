#include<iostream>
using namespace std;

class Vehicle {
public:
    Vehicle(){
        cout<<"vehicle"<<endl;
    }
    void start(){
        cout<<"Hi"<<endl;
    }
};

class Car: public Vehicle {
public:
    Car(){
        cout<<"car"<<endl;
    }
};

class Bike: public Vehicle {
public: 
    Bike() {
        cout<<"bike"<<endl;
    }
    void test(){
        start();
        cout<<"NO"<<endl;
    }
};

int main(){
    Car c;
    c.start();
    Bike b;
    b.test();
    b.start();
    return 0;
}