#include <iostream>
using namespace std;
int main(){
    int n=839;
    int temp=n;
    int ans=0;
    int lastdigit=0;
    while (temp >0){
        lastdigit=temp%10;
        ans=ans+lastdigit;
        temp=temp/10;
        
    }
    cout<<ans;
    return 0;
}