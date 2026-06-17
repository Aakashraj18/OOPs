#include<iostream>
using namespace std;

class Shape {
protected: 
    string color;

public:
    Shape(string c){
        this->color = c;
    }

    virtual double area() = 0;

    string getColor(){
        return color;
    }
    
    ~Shape();
};

class Rectangle: public Shape {
    double length, weigth;

public: 
    Rectangle(string color, double l, double w): Shape(color) {
        this->length = l;
        this->weigth = w;
    }

    double area() override {
        return length * weigth;
    }
};

int main(){
    Shape* s = new Rectangle("yellow", 4, 5);
    s->getColor();
    s->area();
    return 0;
}