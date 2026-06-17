#include<iostream>
using namespace std;

class Animal {
private: 
    string name;

public: 
    void setName(string n){
        this->name = n;
    }

    string getName(){
        return name;
    }
};

int main(){
    Animal a;
    a.setName("vicky");
    cout<<a.getName()<<endl;
}