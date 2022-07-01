#include <bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int n,k;
        cin>>n>>k;
        int arr[n];
        int b[n]={0};
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<n;i++){
            b[arr[i]-1]=b[arr[i]-1]+1;
        }
        int count=0;
        for (int i=0;i<n;i++){
            if (b[i]>=k && arr[i]!=i+1){
                count++;
            }
        }
        cout<<count<<endl;
    }
}
