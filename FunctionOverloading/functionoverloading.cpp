#include<iostream> 
using namespace std;

class Greeks {
public:
    void add(int a, int b){
        cout<<a+b<<endl;
    }

    void add(double a, double b){
        cout<<a+b<<endl;
    }
};


int main(){
    Greeks g;
    g.add(4,5);
    g.add(3.4,5.6);
    return 0;
}