#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int s,a,b,c;
        cin>>s>>a>>b>>c;
        int l=s-(a+b);
        if(l>c){
            cout<<0<<endl;
        }
        else if(c>max(a,b)&& c>min(a,b)){
            cout<<2<<endl;
        }
        else{
            cout<<1<<endl;
        }
        
    }
}