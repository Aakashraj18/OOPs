#include<iostream>
using namespace std;

class Employee {
private:
    string name;
    float salary;

public:
    Employee(string n, float s){
        this->name = n;
        this->salary = s;
    }

    string getName() { return name; }
    float getSalary() { return salary; }

    void setName(string name){
        this->name = name;
    }
    void setSalary(float salary){
        this->salary = salary;
    }

    void display(){
        cout<<name<<endl;
        cout<<salary<<endl;
    }
};

int main(){
    Employee e("xy", 95000.0);

    e.display();
    return 0;
}