#include <bits/stdc++.h>
using namespace std;
int occ(int arr[],int n,int i,int k){
    if (i==n){
        return -1;
    }
    if (arr[i]==k){
        return i;
    }
    return occ(arr,n,i+1,k);
}
int locc(int arr[],int n,int i,int k){
    
    if (i==n){
        return -1;
    }
    if (arr[i]==k){
        return i;
    }
    return occ(arr,n,i-1,k);
}
int main(){
    int arr[]={1,2,3,4,5,2,6,7};
    int n=8;
    int k=2;
    cout<<locc(arr,n,n,k);    
}
