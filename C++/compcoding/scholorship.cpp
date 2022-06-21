#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int R;
    cin>>R;
    if(R>=0 && R<=50){
        cout<<100;
    }
    else if(R>=51 && R<=100){
        cout<<50;
    }
    else cout<<0;
    
    
    return 0;
}
