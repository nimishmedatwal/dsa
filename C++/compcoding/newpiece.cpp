#include <bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int a,b,p,q;
        cin>>a>>b>>p>>q;
        int prev=a+b;
        int next=p+q;
        if(prev%2==next%2 && a!=p && b!=q){
            cout<<2<<endl;
        }
    }
}   