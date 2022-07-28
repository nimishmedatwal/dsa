e#include <bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    for (int i=0 ;i<T;i++){
        int a,b,c,d,e;
        cin>>a>>b>>c>>d>>e;
        if (a<=e && b+c<=d){
            cout<<"YES"<<endl;
            break;
        }
        else if (b<=e && a+c<=d){
            cout<<"YES"<<endl;
            break;
        }
        else if (c<=e && a+b<=d){
            cout<<"YES"<<endl;
            break;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
}