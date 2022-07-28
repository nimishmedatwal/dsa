#include <bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while (T--){
        int p,q,x,y;
        cin>>p>>q>>x>>y;
        int o=p+q;
        int n=x+y;
        if(p==x&&q==y){
            cout<<0<<endl;
            break;
        }
        if(o%2==0 && n%2==0)
            cout<<"YES"<<endl;
        
        
    }
}
