#include <iostream>
using namespace std;

class convert
{

public:
    double val1; // initial value
    double val2; // converted value
    // convert(double i)
    // {
    //     val1 = i;
    // }
    double getconv() { return val2; }
    double getinit() { return val1; }

    virtual void compute() = 0; //virtual function
};

class ftoc: public convert {
    public:
    // ftoc (double i): convert(i){}
    void compute(){
        val2 = (val1-32) / 1.8;
    }

};

class ltog : public convert{
    public:
    // ltog (double i): convert (i){}
    void compute(){
        val2 = val1 / 3.7854;
    }
};
int main(){
    convert *p;
    ltog d1;
    ftoc d2;
    d1=10;
    
    p= &d1;
    cout<<p->getconv()<<endl<<

    return 0;
}
