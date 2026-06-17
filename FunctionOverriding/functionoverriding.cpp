#include<iostream>
using namespace std;

class Animal {
public:
    void virtual display(){
        cout<<"hi"<<endl;
    }
};


class Dog : public Animal {
public:
    void display() override {
        cout<<"Yes"<<endl;
    }
};
int main(){
    Animal* btr;
    Dog obj;
    btr = &obj;
    btr->display();
    return 0;
}