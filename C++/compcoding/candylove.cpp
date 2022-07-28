#include <bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    for (int i=0;i<T;i++){
        int n;
        cin>>n;
        int arr[n];
        for (int j=0;j<n;j++){
            cin>>arr[j];
        }
        int sum=0;
        for (int j=0;j<n;j++){
            sum+=arr[j];
        }
        int num;
        int counter=0;
        for (int j=0;j<sum;j++){
            if ((2*j)+1==sum){
                num=j;
                counter=1;
                break;
            }
        }
        if (counter==0){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}
