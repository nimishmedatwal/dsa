#include <iostream>
using namespace std;
int main(){
    int num,temp,ld,ams;
    cin>>num;
    temp=num;
    ams=0;
    
    while(temp>0){
        ld=temp%10;
        temp=temp/10;
        ams=(ld*ld*ld)+ams;
      
    }
    if (ams==num){
        cout<<"The number is armstrong number";
    }else{
        cout<<"The number is not armstrong number";
    }
    return 0;
}