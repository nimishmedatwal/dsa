#include <iostream>
using namespace std;
// void swap(int a , int b){
//     int temp;
//     temp=a;
//     a=b;
//     b=temp;
//     }

// int main(){
//     int a=9;
//     int b=2;
//     swap(a,b);
//     cout<<a<<' '<<b<<endl;
//     return 0;
// }
void swap(int *a , int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    }

int main(){
    int a=9;
    int b=2;
    int *aptr=&a;
    int *bptr=&b;
    swap(aptr,bptr);
    cout<<a<<' '<<b<<endl;
    return 0;
}