#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(i==0){
                continue;
            }
            else{
                if(a[i-1]>a[i]){
                    cout<<i+1<<endl;
                    break;
                }
            }
        }
        
    }
}