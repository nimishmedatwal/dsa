#include <bits/stdc++.h>
using namespace std;
int main (){
    int T;
    cin>>T;
    while(T--){
        int x,y,z;
        cin>>x>>y>>z;
        for (int i = 1; i <= 100; i++)
        {
            if(x<=y*i && x>y*(i-1)){
                cout<<i*z<<endl;
                break;
            }
        }

    }
}
