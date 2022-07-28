#include <iostream>
using namespace std;

template <class T> <class X> T MyMax(T a, X b){
    return a>b?a:b;
}

int main(){
    cout<<MyMax(10.3,23);
    return 0;
}