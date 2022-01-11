#include <iostream>
using namespace std;
float area(int r){
    float area =3.14*r*r;
    return area;
}
int main(){
    int r;
    float a=area(r);
    cout<<"area of cirlce is "<<a;
    return 0;
}