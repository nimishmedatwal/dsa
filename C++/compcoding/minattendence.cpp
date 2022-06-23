#include <bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    for (int i=0;i<T;i++){
        int n;
        cin>>n;
        int arr[n];
        int count=0;
        for (int j=0;j<n;j++){
            cin>>arr[j];
            if (arr[j]==1){
                count++;
            }
        }
        
        if ((90-count)>=(120-n)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}

