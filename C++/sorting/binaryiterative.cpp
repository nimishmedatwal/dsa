#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[6]={6,2,4,6,8,12};
    int t;
    cin>>t;
    int n=6;
    sort(arr,arr+n);
    int mid=arr[n/2];
    if(t>=mid){
        for(int i=n/2;i<n;i++){
            if(arr[i]==t){
                cout<<"found at "<<i;
                break;
            }
        }
    }
    else{
        for(int i=0;i<n/2;i++){
            if(arr[i]==t){
                cout<<"found at "<<i;
                break;
            }
        }
    }
}