#include<iostream>
using namespace std;

class Animal {
public:
    Animal(){
        cout<<"animal barks"<<endl;
    }
};

class Dog : public Animal {
public: 
    Dog(){
        cout<<"Dog barks"<<endl;
    }
};

int main(){
    Dog d;
    return 0;
}