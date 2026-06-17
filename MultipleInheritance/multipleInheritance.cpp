#include<iostream>
using namespace std;

class Animal {
public:
    void animal(){
        cout<<"animal"<<endl;
    }
};

class Dog {
public:
    void dog(){
        cout<<"dog"<<endl;
    }
};

class Cat : public Animal, public Dog {
public:
    Cat(){
        cout<<"cat"<<endl;
    }
};

int main(){
    Cat a;
    a.animal();
    a.dog();
    return 0;
}