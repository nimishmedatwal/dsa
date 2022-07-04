#include <bits/stdc++.h>
using namespace std;
int main (){
    int T;
    cin>>T;
    while(T--){
        int x;
        cin>>x;
        if (x==0 || x%3==0){
            cout<<0<<endl;
        }
        else{
            cout<<3-(x%3)<<endl;
        }

    }
}