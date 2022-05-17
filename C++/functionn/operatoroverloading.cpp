#include <iostream>
using namespace std;

class Complex {
    private:
        int imag, real;
    public:
        Complex (int r=0,int i=0){
            real=r;
            imag=i;
        }
        Complex operator + (Complex const &obj){
            Complex res;
            res.real=real+obj.real;
            res.imag=imag+obj.imag;
            cout<<real<<"  "<<obj.real;
            return res;
        }
        void print(){
            cout<<real<<" + "<<imag<<" i";
        }
};
int main(){
    Complex c1(5,2);
    Complex c2(3,4);
    Complex c3=c1+c2;
    c3.print();
    return 0;
}