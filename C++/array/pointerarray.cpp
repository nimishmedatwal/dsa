#include <iostream>
using namespace std;
int main(){
    // int a[]={1,2,3,4,5};
    // cout<<a<<endl;
    // int *p=a;
    // for (int i=0 ;i<5;i++){
    //     cout<<*p;
    //     p++;
        
    // }
    int b=10;
    int *u=&b;
    cout<<*u<<endl;
    u++;
    cout<<*u;

}