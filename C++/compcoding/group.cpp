#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int a[100000]={0}; 
        for(int i=0;i<n;i++){
            cin>>arr[i];
            a[arr[i]]++;
        }
       int count=0;

        for (int i = 0; i < 10; i++){
            if (arr[i]!=a[arr[i]]){
                count++;
                break;
            }
        }
        if (count==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
    return 0;
}