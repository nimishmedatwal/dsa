#include <iostream>
using namespace std;
int main(){
    int a=33;
    int b =3333;
    int c= a>b?a-b:b-a;
    cout<<&c;
    
    return 0;
}