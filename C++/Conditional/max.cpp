#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;
    cout<<"Largest number is ";
    if (a>b & a>c){
        cout<<a;

    }else if(b>a & b>c){
        cout<<b;
    }
    else{
        cout<<c;
    }
    return 0;
}