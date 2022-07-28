#include <iostream>
using namespace std;
int main(){
    int num,temp,ld,revnum;
    cin>>num;
    temp=num;
    revnum=0;
    while(temp>0){
        ld=temp%10;
        temp=temp/10;
        revnum=ld+revnum*10;
      
    }
    cout<<revnum;
    return 0;
}