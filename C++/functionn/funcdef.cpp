#include <iostream>
using namespace std;
class A{
public:
 void fun();   //only declaration
}; 
void A::fun(){      //function definition
cout<<"in fun()"<<endl;
} 
int main(){ 
    A obj;
    obj.fun(); 
}
