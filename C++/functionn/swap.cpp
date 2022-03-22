#include <iostream>
using namespace std;

void swap(int *k,int *m){
    int c=*k;
    *k=*m;
    *m=c;
}

int main(){
    int a=10,b=20;
    swap(&a,&b);
    cout<<a<<b;

    return 0;
}