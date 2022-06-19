#include <bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    for (int i=0;i<T;i++){
        int a,b;
        cin>>a>>b;
        int c[a]; 
        for (int j=0;j<a;j++){
            cin>>c[j];
            if (c[j]<=b){
                cout<<1;
                b=b-c[j];
            }
            else{
                cout<<0;
            }
        }

    }
    return 0;
}
