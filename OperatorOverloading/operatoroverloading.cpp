#include<iostream> 
using namespace std;

class Complex {
public: 
    int real, imag;
    Complex(int r, int i){
        this->real = r;
        this->imag = i;
    }

    Complex operator +(const Complex& obj) {
        return Complex(real + obj.real, imag + obj.imag);
    }

    void display(){
        cout<<real<<"+i"<<imag<<endl;
    }
};

int main(){
    Complex c1(2,3), c2(5,6);
    
    Complex c3 = c1+c2;
    c3.display();
    //cout<<c3.real<<"+i"<<c3.imag<<endl;
}