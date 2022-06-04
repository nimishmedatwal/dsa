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

void f(Base &r){
    r.fun();
}
int main(){
    Base b;
    Der1 d1;
    Der2 d2;    
    f(b);
    f(d1);
    f(d2);

}