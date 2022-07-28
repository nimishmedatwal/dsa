#include <iostream>
using namespace std;

class Base{
    protected:
        int a;
    public:
        void disp(){
            cout << a << endl;
        }
};

class Derived: public Base{
    public:
        void di(){
            cout << this -> a;
        }  
};