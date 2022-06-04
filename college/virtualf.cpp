#include <iostream>
using namespace std;

class Base{
    public:
        virtual void fun(){
            cout<<"Base class"<<endl;
        }
};

class Der1 : public Base{
    public:
    void fun(){
        cout<<"der1"<<endl;
    }
};

class Der2 : public Base{
    public:
    void fun(){
        cout<<"der2";
    }
};
int main(){
    Base *p,b;
    Der1 d1;
    Der2 d2;
    p=&b;
    p->fun();
    p=&d1;
    p->fun();
    p=&d2;
    p->fun();
    
}