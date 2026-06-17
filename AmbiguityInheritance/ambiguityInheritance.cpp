#include<iostream>
using namespace std;

class Base {
public: 
    void fun(){
        cout<<"Hi"<<endl;
    }
};

class p1: virtual public Base {};
class p2: virtual public Base {};

class Dog: public p1, public p2 {};

int main(){
    Dog d;
    d.p1::fun();           // ambiguous due to Dog inherits from p1, p2 which eventually inherits from same base class Base 
    d.p2::fun();
    return 0;
}


// SOLUTION USE SCOPE RESOLUTION OPERATOR (::)

