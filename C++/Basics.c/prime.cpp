#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a=0;
    for (int i=2; i<sqrt(n);i++){
        if(n%i==0){
            a=1;
            break;
        }
    }
    if(a=1){
        cout<<"Number is not a prime number";
    }
    else{
        cout<<"Number is a prime number";
    }
    return 0;
}